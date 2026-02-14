#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destFile;
    char ch;

    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s\n", argv[1]);
        return 1;
    }

    destFile = fopen(argv[2], "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file %s\n", argv[2]);
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied and converted to uppercase successfully.\n");

    return 0;
}