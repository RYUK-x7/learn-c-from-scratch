#include <stdio.h>

int main(void){
    int i;
    char j;

    i = 0;
    for(j = 0; j < 101; j++){
        i = j + i;
    }

    printf("Total is: %d", i);

    return 0;
}