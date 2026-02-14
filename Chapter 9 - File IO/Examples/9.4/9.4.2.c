#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    double ld;
    int d;
    char str[80];
    if (argc != 2) {
        printf("Specify file name.\n");
        exit(1);
    }

    fp = fopen(argv[1], "w");
    if (fp == NULL) {
        printf("Cannot open file for writing.\n");
        exit(1);
    }
    fprintf(fp, "%f %d %s", 12345.342, 1908, "hello");
    fclose(fp);

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Cannot open file for reading.\n");
        exit(1);
    }

    fscanf(fp, "%lf %d %s", &ld, &d, str);
    printf("Read from file:\n%f %d %s\n", ld, d, str);

    fclose(fp);
    return 0;
}