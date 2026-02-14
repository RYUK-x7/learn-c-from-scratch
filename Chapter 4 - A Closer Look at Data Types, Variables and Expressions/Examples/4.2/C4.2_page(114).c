#include <stdio.h>

int main(void){
    printf("This program won't compile.\n");
    int i; /*This should come first.*/
    i = 10;
    printf("%d", i);

    return 0;
}