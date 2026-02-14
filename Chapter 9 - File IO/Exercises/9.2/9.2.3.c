#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *source, *dest;
    int ch;

    if (argc < 3 || argc > 4) {
        printf("Usage: copy <source file> <dest file> [watch]\n");
        exit(1);
    }

    if ((source = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open source file.\n");
        exit(1);
    }

    if ((dest = fopen(argv[2], "w")) == NULL) {
        printf("Cannot open destination file.\n");
        exit(1);
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
        if (argc == 4 && strcmp(argv[3], "watch") == 0) {
            putchar(ch);
        }
    }

    fclose(source);
    fclose(dest);
    return 0;
}