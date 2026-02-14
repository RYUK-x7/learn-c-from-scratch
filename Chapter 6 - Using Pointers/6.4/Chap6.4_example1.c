

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p = "stop"; /* Pointer to string constant "stop" */
    char str[80];

    do {
        printf("Enter a string: ");
        gets(str);
    } while (strcmp(p, str)); 

    return 0;
}
