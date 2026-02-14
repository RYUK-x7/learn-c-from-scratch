#include <stdio.h>

int main()
{
    char a, b, c;
    printf("Enter three characters: ");
    a = getchar();
    b = getch(); 
    c = getche();

    printf("\nYou entered: %c %c %c\n", a, b, c);

    // getchar acts like scanf and waits for the Enter key
    // getch reads a character immediately without waiting for Enter and does not display it
    // getche reads a character immediately without waiting for Enter and displays it
}