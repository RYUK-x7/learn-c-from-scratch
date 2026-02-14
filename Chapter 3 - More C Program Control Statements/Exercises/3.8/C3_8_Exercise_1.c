/*  / Odd numbers using continue  */

#include <stdio.h>
int main(void)
{
    int i;
    printf("Odd numbers between 1 and 100:\n");

    for(i = 1; i < 101; i++) {

        if(i % 2 == 0) {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n\nFinished printing odd numbers.\n");
    return 0;
}
