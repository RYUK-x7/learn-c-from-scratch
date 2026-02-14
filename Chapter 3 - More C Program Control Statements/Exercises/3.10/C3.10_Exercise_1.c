/*  Printing 1 to 10 using goto statement  */

#include<stdio.h>

int main ()
{
    int i=1;
    again1:
    if(i>10)
    goto again2;
    printf("%d ",i);
    i++;
    goto again1;
    again2: printf("done");

    return 0;
}