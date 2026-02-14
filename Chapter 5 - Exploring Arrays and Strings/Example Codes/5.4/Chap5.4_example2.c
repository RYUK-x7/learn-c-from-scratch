/*This program prints "Hello" on the screen */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[80] = "I like C";
    strcpy(str, "Hello");
    printf(str);
    printf("\n");
    return 0;
}