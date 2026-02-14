/*This program loads the sqrs array with the squares of the numbers through 1 to 10
 and then displays them */
 
#include <stdio.h>
int main()
{
    int sqrs[10];
    for (int i = 1; i <= 10; i++)
    {
        sqrs[i - 1] = i * i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", sqrs[i]);
    }
    return 0;
}