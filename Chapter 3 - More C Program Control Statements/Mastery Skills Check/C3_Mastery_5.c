/*  3 ways to count from 1 to 10  */


#include<stdio.h>

int main()
{
    int x;
    for(x=1; x<11; x++)
    {
        printf("%d ",x);
    }
    printf("\n");
    x=1;
    while (x<=10)
    {
        printf("%d ",x);
        x=x+1;
    }
    printf("\n");
    x=1;
    do
    {
        printf("%d ",x);
        x++;
    }
    while(x<11);

    return 0;
}