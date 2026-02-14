#include <stdio.h>

int main(int argc, char *argv[])
{
    char s[100];

    if (argc < 2)
    {
        printf("Enter a string: ");
        scanf("%s", s);
    }
    else
    {
        int i = 0;
        while (argv[1][i] != '\0')
        {
            s[i] = argv[1][i];
            i++;
        }
        s[i] = '\0';
    }

    int i = 0;
    printf("Coded string: ");
    while (s[i] != '\0')
    {
        printf("%c", s[i] + 1);
        i++;
    }
    printf("\n");

    return 0;
}
