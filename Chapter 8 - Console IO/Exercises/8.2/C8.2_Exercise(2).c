#include <stdio.h>
int main()
{
    char str[80] = " this is a test ";
    // Putchar outputs a single charater but str is a full string.
    putchar(str);
    return 0;
}