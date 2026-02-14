#include <stdio.h>
int main(void)
{
    int i;
    for( i=2; i<=100 ; i++)
        printf("%3i %5i %10i\n", i, i*i, i*i*i);

    return 0;
}