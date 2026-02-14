#include <stdio.h>

//this program is incorrect. Because gets() must be called with e pointer to a actual array.


int main(){

    char *p, *q;

    printf("Enter a string: ");
    p = gets(q);
    printf(p);

    return 0;
}