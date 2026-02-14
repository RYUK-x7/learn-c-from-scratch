/*  Devision of 2 numbers. re-writing the given code  */ 

#include <stdio.h>

int main()
{
    int i, j, k;

    for (k = 0; k < 10; k++)
    {
        printf("Enter first number: ");
        scanf("%d", &i);

        printf("Enter second number: ");
        scanf("%d", &j);

        if (j)
            printf("%.2f\n", (float)i / j);
        else
            printf("Cannot divide by zero. \n");
    }

    return 0;
}