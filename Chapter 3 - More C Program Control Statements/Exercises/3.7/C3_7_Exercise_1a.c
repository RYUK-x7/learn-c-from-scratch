// using break in for loop

#include <stdio.h>
int main(void)
{
    int i;
    printf("for loop with break:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 7) {
            printf("Breaking out of the loop at %d\n", i);
            break;
        }
        printf("%d ", i);
    }
    printf("\nLoop finished.\n");
    return 0;
}