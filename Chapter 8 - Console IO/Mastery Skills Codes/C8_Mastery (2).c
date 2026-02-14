#include <stdio.h>

int main()
{
    float n;
    printf("Enter a float: ");
    scanf("%f", &n);
    printf("e: %e E: %E\n", n, n);
}