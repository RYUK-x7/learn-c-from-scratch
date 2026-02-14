#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];


    if (argc != 2) {
        printf("Please specify a file name.\n");
        exit(1);
    }
    fp = fopen(argv[1], "w");
    if (fp == NULL) {
        printf("Cannot open file for writing.\n");
        exit(1);
    }
    printf("Enter text (a blank line to stop):\n");
        while (1) {
        printf("> ");
        if (fgets(str, sizeof(str), stdin) == NULL)
            break;
        if (strcmp(str, "\n") == 0)
            break;
            fputs(str, fp);
    }

    fclose(fp);

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Cannot open file for reading.\n");
        exit(1);
    }
        printf("\nContents of the file:\n");

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}