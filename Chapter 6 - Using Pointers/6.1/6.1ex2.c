#include <stdio.h>
int main(void){
    int *p, q;
    p= &q;/*get q's address*/
    *p= 199; /*assign q a vaue using pointer*/
    printf("q's value is %d", q);
    return 0;
}