/*  displaying the ASCII code of a character  */

#include <stdio.h>
#include <conio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    a = getche();
    printf("\nIt's ASCII code is: %d", a);
    return 0;
}