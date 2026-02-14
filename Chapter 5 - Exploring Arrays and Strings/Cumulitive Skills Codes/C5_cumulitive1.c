// fill up the remaining space in a string with dots (.) up to 80 characters
// Cumulitive Skills Check 1 - Chapter 5

#include <stdio.h>
#include <string.h>

void padString(char str[])
{
    int len = strlen(str);
    int i;

    if (len < 80)
    {
        for (i = len; i < 80; i++)
        {
            str[i] = '.';
        }
        str[80] = '\0';
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
    padString(str);
    printf("\nFinal string:\n%s\n", str);
    printf("Length: %d\n", (int)strlen(str));
    return 0;
}
