/* Write a program that creates a string table containing the English words for the numbers 0 thriugh 9. Using this table, aloow the user to enter a digit
(as a character) */


#include <stdio.h>

int main(void)
{
    char digits[10][10] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    char num;

    printf("Enter number: ");
    num = getchar();  
    printf("\n");

    num = num - '0';   

    if (num >= 0 && num < 10)
        printf("%s\n", digits[num]);
    else
        printf("Invalid input!\n");

    return 0;
}
