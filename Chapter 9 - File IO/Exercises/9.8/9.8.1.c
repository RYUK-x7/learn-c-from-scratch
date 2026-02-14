#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char line[256];
    char response;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        printf("Do you want to see another line? (y/n): ");
        scanf(" %c", &response);
        if (response != 'y' && response != 'Y') {
            break;
        }

        while (getchar() != '\n');
    }

    fclose(file);
    return 0;
}