#include <stdio.h>
int main(void){
    int *p, q;
    p= &q;
    q= 1;
    printf("%p", p);
    
    *p++; /*this will not increment q*/
    printf("%d %p", q, p);

    return 0;
}