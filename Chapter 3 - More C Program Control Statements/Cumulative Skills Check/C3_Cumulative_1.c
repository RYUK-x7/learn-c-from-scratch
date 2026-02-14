/*  program that reads characters from the keyboard and displays it as words  */

#include <stdio.h>
#include <conio.h>

int main()
{
    char a;
    printf("Enter characters (q to quit): \n");
    do
    {
        a = getche();
        switch (a)
        {
        case '\t':
            printf("tab\n");
            break;
        case '\b':
            printf("backspace\n");
            break;
        case '\r':
            printf("Enter\n");
        }
    } while (a != 'q');

    return 0;
}