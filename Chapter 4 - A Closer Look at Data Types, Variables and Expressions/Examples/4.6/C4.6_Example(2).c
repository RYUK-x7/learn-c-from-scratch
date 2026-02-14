#include <stdio.h>

int main(void){
    short int si;
    long int li;

    li = 100000;
    si = li;

    printf("%hd\n", si);

    return 0;
}