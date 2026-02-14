#include <stdio.h>

int main()
{
    printf("Enter your number: ");
    char number[20];
    scanf("%19[0-9.]", number);
    printf("You entered: %s\n", number);
}