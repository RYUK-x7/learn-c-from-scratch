

#include <ctype.h>
#include <stdio.h>
#include <string.h> /* Assuming gets() and potentially tolower/toupper are used */

void gets_p(char *str) /* A version of gets using pointers */
{
    printf("Enter a string: ");
    /* This function body is not fully visible, but it reads a string into str */
    /* For standard C, we'll use the standard gets for simplicity, or fgets */
    gets(str);
}

void toupper_str(char *p)
{
    while (*p) {
        *p = toupper(*p);
        p++;
    }
}

void tolower_str(char *p)
{
    while (*p) {
        *p = tolower(*p);
        p++;
    }
}

int main(void)
{
    char str[80];
    char *p;

    printf("Enter a string: ");
    gets(str);

    /* Uppercase conversion */
    p = str;
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    printf("%s\n", str); /* uppercase string */

    /* Reset p and lowercase conversion */
    p = str;
    while (*p) {
        *p = tolower(*p);
        p++;
    }
    printf("%s\n", str); /* lowercase string */

    return 0;
}