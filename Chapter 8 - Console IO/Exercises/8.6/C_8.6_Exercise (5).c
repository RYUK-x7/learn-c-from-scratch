#include <stdio.h>

int main()
{
    int a;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &a);
    printf("Octal: %o Decimal: %d\n", a, a);
}