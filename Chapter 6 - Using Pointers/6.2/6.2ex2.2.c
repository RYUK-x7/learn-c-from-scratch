#include <stdio.h>
int main(void){
    int *p, q;
    p= &q;
    q= 1;
    printf("%p", p);

    (*p)++; /*now q isincremented and p is unchanged */
    printf("%d %p", q, p);

    return 0;
}