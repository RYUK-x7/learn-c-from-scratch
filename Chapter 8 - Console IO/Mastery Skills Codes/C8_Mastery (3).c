#include <stdio.h>

// Scanset
int main()
{
    printf("Enter a string: ");
    char s[20];
    scanf("%[0-9a-zA-Z]", s);
    printf("You entered: %s\n", s);

    // Reads as long as alphanumeric characters are entered
}