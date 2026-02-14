#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("example.txt", "w");
    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    fputs("This will be flushed to disk.\n", fp);

    fflush(fp);

    fclose(fp);
    return 0;
}