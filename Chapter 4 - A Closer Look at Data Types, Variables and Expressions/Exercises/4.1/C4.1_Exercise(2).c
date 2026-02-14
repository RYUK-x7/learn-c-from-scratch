#include <stdio.h>

int main(void){
    unsigned long int dist;
    printf("Enter distance in miles: ");
    scanf("%lu", &dist);

    float time = dist / 186000;

    printf("Total time = %f seconds", time);

    return 0;
}