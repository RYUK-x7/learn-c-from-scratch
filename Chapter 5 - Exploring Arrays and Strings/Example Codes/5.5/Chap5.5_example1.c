/*This program lets a user enter 10 strings. Then it displays them one at a time
in any order the user chooses. It stops when the user enters a negative number */

#include <stdio.h>
int main()
{
    char text[10][80];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
        gets(text[i]);
    }
    do
    {
        printf("Enter the number of string (1 - 10) : ");
        scanf("%d", &i);
        i--;
        if (i >= 0 && i < 10)
        {
            printf("%s\n", text[i]);
        }
    } while (i >= 0);
    return 0;
}