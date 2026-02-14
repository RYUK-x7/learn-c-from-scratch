#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p;
    int i;

    if ((fp = fopen("myfile", "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    p = str;
    while (*p) {
        if (fputc(*p, fp) == EOF) {
            printf("Error writing file.\n");
            exit(1);
        }
        p++;
    }

    fclose(fp);

    if ((fp = fopen("myfile", "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    char ch;
    while((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);

    return 0;
}