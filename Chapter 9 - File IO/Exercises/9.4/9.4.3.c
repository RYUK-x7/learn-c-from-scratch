#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *src, *dst;
    char line[200];

    if (argc != 3)
    {
        printf("usage: copy sourcefile destfile\n");
        return 1;
    }

    src = fopen(argv[1], "r");
    if (src == NULL)
    {
        printf("cant open source file\n");
        return 1;
    }

    dst = fopen(argv[2], "w");
    if (dst == NULL)
    {
        printf("cant open dest file\n");
        fclose(src);
        return 1;
    }

    while (fgets(line, 200, src) != NULL)
    {
        if (fputs(line, dst) == EOF)
        {
            printf("write error\n");
            fclose(src);
            fclose(dst);
            return 1;
        }
    }

    printf("file copied ok\n");
    fclose(src);
    fclose(dst);
    return 0;
}