/*This program loads a 4*5 array with the products of the indices, then displays the array in
a row - column format */

#include <stdio.h>
int main()
{
    int twod[4][5];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            twod[i][j] = i * j;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%4d", twod[i][j]);
        }
        printf("\n");
    }
    return 0;
}