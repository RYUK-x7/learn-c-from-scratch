#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char line[100];
    int count = 0;
    char ch;

    fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        printf("cant open file\n");
        return 1;
    }

    while (fgets(line, 100, fp) != NULL)
    {
        printf("%s", line);
        count++;
        if (count == 20)
        {
            printf("\n--more-- press Enter to continue--");
            ch = getchar();
            count = 0;
        }
    }

    fclose(fp);
    printf("\nEnd of file.\n");
    return 0;
}