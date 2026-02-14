

#include <stdio.h>

int main(void)
{
    char str[80];
    char *p;

    printf("Enter a string: ");
    gets(str);

    p = str;

    while (*p != ' ' && *p != '\0') {
        p++;
    }

 
    if (*p == ' ') {
        p++;
        printf("String left: %s\n", p);
    } else {
        printf("No space found\n");
    }

    return 0;
}
