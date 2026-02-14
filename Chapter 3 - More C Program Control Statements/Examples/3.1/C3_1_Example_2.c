/*  menu selection  */

#include <stdio.h>

int main()
{
    int a, b;
    char c;
    printf("Do you want to:\n");
    printf("Add, Subtract, Multiply, or Divide?\n");
    printf("Enter first letter: ");
    c = getchar();

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (c == 'A')
        printf("%d", a + b);
    if (c == 'S')
        printf("%d", a - b);
    if (c == 'M')
        printf("%d", a * b);
    if (c == 'D' && b != 0)
        printf("%.2f", (float)a / b);

    return 0;
}