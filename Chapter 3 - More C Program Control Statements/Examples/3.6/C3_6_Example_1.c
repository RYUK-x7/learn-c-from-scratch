/*  Arithmetic drill with 3 chances  */

#include <stdio.h>

int main(void)
{
    int answer, count, chances, right;

    for(count=1; count<11; count++) {
        
        right = 0;

        for(chances=0; chances<3 && !right; chances++) {
            printf("What is %d + %d? ", count, count);
            scanf("%d", &answer);

            if(answer == count+count) {
                printf("Right!\n");
                right = 1;
            }
            else {
               
                if(chances < 2) { 
                    printf("Sorry, you're wrong.\n");
                    printf("Try again.\n");
                }
            }
        }

        
        if(!right) {
            printf("The answer is %d.\n", count+count);
        }
    }

    return 0;
}