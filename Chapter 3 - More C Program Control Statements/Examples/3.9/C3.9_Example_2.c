/*  Use of break statement in switch  */


#include <stdio.h>

int main()
{
    char x;

    do {
        printf("\nEnter a character (a, b, c, d, e, or q to quit): ");
        scanf(" %c",&x);
        printf(" \n");

        switch(x) {
            case 'a':
                printf("Now is ");
            case 'b':
                printf("the time ");
            case 'c':
                printf("for all good men.\n");
                break;

            case 'd':
                printf("The summer ");
            case 'e':
                printf("soldier.\n");
        }
    } while(x != 'q');

    return 0;
}
