#include <stdio.h>

int main()
{
    printf("Enter a string, a double, and an integer: ");
    char s[20];
    double d;
    int a, n;
    scanf("%s %lf %i%n", s, &d, &a, &n);
    printf("%i characters were read.\n", n);
}