/*  Waiting for the user to type a q and ending the program  */

#include <stdio.h>
#include <conio.h> 

int main(void)
{
    char ch;

    do {
        ch = getche();
    } while(ch!='q');

    printf("\nFound the q.");

    return 0;
}