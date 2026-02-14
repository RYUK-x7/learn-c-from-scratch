/*This program requests input of two strings, demonstrates the four string
 functions with them */

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[80], str2[80];
    printf("Enter first string less than 80 characters: ");
    gets(str1);
    printf("Enter second string less than 80 characters: ");
    gets(str2);
    /*see how long the strings are*/
    printf("%s is %d characters long\n", str1, strlen(str1));
    printf("%s is %d characters long\n", str2, strlen(str2));
    /*compare the strings*/
    int result = strcmp(str1, str2);
    if (result < 0)
    {
        printf("'%s' is less than '%s'\n", str1, str2);
    }
    else if (result > 0)
    {
        printf("'%s' is greater than '%s'\n", str1, str2);
    }
    else
    {
        printf("'%s' is equal to '%s'\n", str1, str2);
    }
    /*concatenate str 2 to the end of str1*/
    if (strlen(str1) + strlen(str2) < 80)
    {
        strcat(str1, str2);
        printf("After concatenation: %s\n", str1);
    }
    else
    {
        printf("Cannot concatenate, result would exceed 80 characters\n");
    }
    /*copy str2 to str1*/
    strcpy(str1, str2);
    printf("After copying: %s %s\n", str1, str2);
    return 0;
}