/*  Displaying whether a number is positive or negative or 0  */


#include<stdio.h>

int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x==0)
    printf(" This number is zero");
    else
    {
        if(x>0)
        printf("%d is positive",x);
        else
        printf("%d is negative",x);
    }
    return 0;
}