/*  Number Confirmation and Summation  */

#include <stdio.h>

int main(void)
{
    int total = 0;
    int i, j;

    do {
        printf("Enter next number (0 to stop): ");
        scanf("%d", &i);

        if (i == 0)
            break;

        printf("Enter number again: ");
        scanf("%d", &j);

        if (i != j) {
            printf("Mismatch\n");
            continue;
        }

        total = total + i;

    } while (1);

    printf("Total is %d\n", total);

    return 0;
}