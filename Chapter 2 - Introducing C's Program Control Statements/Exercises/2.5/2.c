// fixing the code

#include<stdio.h>

int main(void){
    int a,b;
    a=1;
    a++; 
    b=a;  //can also be written b=++a combining both lines
    b--;
    printf("%d %d", a, b);
    return 0;
}