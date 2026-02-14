/*  Basic arithmetic operations between two numbers using switch  */


#include <stdio.h>

int main()
{
    int a, b;
    char ch;

    printf("Do you want to:\n");
    printf("Add, Subtract, Multiply, or Divide?\n");

    do {
        printf("Enter first letter (A, S, M, or D): ");
        scanf(" %c",&ch);
    }while(ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');
    printf("\n");

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(ch) {
        case 'A':
            printf("Result: %d\n", a + b);
            break;
        case 'S':
            printf("Result: %d\n", a - b);
            break;
        case 'M':
            printf("Result: %d\n", a * b);
            break;
        case 'D':
            if(b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;
    }

    return 0;
}
