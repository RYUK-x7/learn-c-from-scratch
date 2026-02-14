#include <stdio.h>
#include <string.h>
struct dir
{
    char name[50];
    char num[20];
};

int main()
{
    struct dir d[100];
    int n = 0, i, ch;
    char s[50];
    FILE *fp;

    while (1)
    {
        printf("\n1.Enter\n2.Find\n3.Save\n4.Load\n5.Quit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        getchar();

        if (ch == 1)
        {
            if (n >= 100)
            {
                printf("Full\n");
                continue;
            }
            printf("Name: ");
            gets(d[n].name);
            printf("Number: ");
            gets(d[n].num);
            n++;
        }

        else if (ch == 2)
        {
            printf("Name to find: ");
            gets(s);
            for (i = 0; i < n; i++)
            {
                if (strcmp(s, d[i].name) == 0)
                {
                    printf("Number: %s\n", d[i].num);
                    break;
                }
            }
            if (i == n)
                printf("Not found\n");
        }

        else if (ch == 3)
        {
            fp = fopen("dir.txt", "w");
            for (i = 0; i < n; i++)
                fprintf(fp, "%s %s\n", d[i].name, d[i].num);
            fclose(fp);
            printf("Saved\n");
        }

        else if (ch == 4)
        {
            fp = fopen("dir.txt", "r");
            n = 0;
            while (fscanf(fp, "%s %s", d[n].name, d[n].num) == 2)
                n++;
            fclose(fp);
            printf("Loaded %d\n", n);
        }

        else if (ch == 5)
            break;
        else
            printf("Wrong!\n");
    }
    return 0;
}