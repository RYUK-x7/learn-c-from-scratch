#include <stdio.h>

int main()
{
    char ch;
    scanf("%2c", &ch);
    printf("You entered: %c\n", ch);

    // Error: We are taking two character inputs for only one character variable.
}