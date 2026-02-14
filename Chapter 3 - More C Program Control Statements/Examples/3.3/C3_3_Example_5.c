/* The following program manually
 increments i at the bottom of the loop */


#include<stdio.h>

int main(void){
    int i;

    for(i=0; i<10; ) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
