/*  Example of using break on a Simple Command Menu  */

#include <stdio.h>

int main(void)
{
    char ch;

    for( ; ; ) {
        printf("\nLoad, Save, Edit, Quit?\n");

        do {
            printf("Enter your selection: ");
            scanf(" %c", &ch);
        } while(ch!='L' && ch!='S' && ch!='E' && ch!='Q');

        if(ch == 'Q') {
            printf("...Quitting program.\n");
            break;
        }

        if(ch == 'L') {
            printf("...Doing the 'Load' task.\n");
        }

        if(ch == 'S') {
            printf("...Doing the 'Save' task.\n");
        }

        if(ch == 'E') {
            printf("...Doing the 'Edit' task.\n");
        }
    }

    return 0;
}