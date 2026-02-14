#include <stdio.h>

int rstrlen(const char *str)
{
    if (*str == '\0')
        return 0;
    else
        return 1 + rstrlen(str + 1);
}

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);
    printf("Length of the string is: %d\n", rstrlen(s));

    return 0;
}
