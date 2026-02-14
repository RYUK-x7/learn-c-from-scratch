#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file1, *file2, *tempFile;
    char ch;

    if (argc != 3) {
        printf("Usage: %s <FILE1> <FILE2>\n", argv[0]);
        return 1;
    }

    file1 = fopen(argv[1], "r");
    if (file1 == NULL) {
        printf("Error: Cannot open %s\n", argv[1]);
        return 1;
    }

    file2 = fopen(argv[2], "r");
    if (file2 == NULL) {
        printf("Error: Cannot open %s\n", argv[2]);
        fclose(file1);
        return 1;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error: Cannot create temporary file\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, tempFile);
    }
    fclose(file1);
    fclose(tempFile);

    file1 = fopen(argv[1], "w");
    file2 = fopen(argv[2], "r");
    if (file1 == NULL || file2 == NULL) {
        printf("Error: Cannot open files for exchange\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file1);
    }
    fclose(file2);
    fclose(file1);

    tempFile = fopen("temp.txt", "r");
    file2 = fopen(argv[2], "w");
    if (tempFile == NULL || file2 == NULL) {
        printf("Error: Cannot open files for final step\n");
        fclose(tempFile);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(tempFile)) != EOF) {
        fputc(ch, file2);
    }

    fclose(tempFile);
    fclose(file2);
    remove("temp.txt"); 

    printf("Contents of %s and %s have been exchanged successfully.\n", argv[1], argv[2]);

    return 0;
}