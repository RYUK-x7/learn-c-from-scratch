/*  Continuation of example 2  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a, b;
    char ch;
    char choice;

    do
    {
        printf("Do you want to:\n");
        printf("Add, Subtract, Multiply, or Divide?\n");
        printf("Enter first letter (A/S/M/D): ");
        ch = getchar();
        printf("\n");

        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);

        getchar();

        if (ch == 'A')
            printf("Result = %d\n", a + b);
        if (ch == 'S')
            printf("Result = %d\n", a - b);
        if (ch == 'M')
            printf("Result = %d\n", a * b);
        if (ch == 'D' && b != 0)
            printf("Result = %.2f\n", (float)a / b);
        if (ch == 'D' && b == 0)
            printf("Error: Division by zero not allowed!\n");

        printf("\nDo you wish to continue? (Y/N): ");
        choice = getche();
        printf("\n");

    } while (choice == 'Y');

    printf("Program ended.\n");
    return 0;
}
