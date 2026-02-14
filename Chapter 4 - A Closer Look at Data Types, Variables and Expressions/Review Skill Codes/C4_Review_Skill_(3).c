#include <stdio.h>

int main() {
    long l;
    short s;
    double d;
    printf("Enter a long integer: ");
    scanf("%ld", &l);
    printf("Enter a short integer: ");
    scanf("%hd", &s);
    printf("Enter a double value: ");
    scanf("%lf", &d);
    printf("\nYou entered:\n%ld %hd %lf", l, s, d);
    return 0;
}
