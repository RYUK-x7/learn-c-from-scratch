#include <stdio.h>
#include <ctype.h>

void string_up(char *s)
{
    while (*s)
    {
        *s = toupper(*s);
        s++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    string_up(str);

    printf("Uppercase: %s\n", str);
    return 0;
}
