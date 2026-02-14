#include <stdio.h>
#include <math.h>  

float myhypot(float a, float b) {
    return sqrt(a * a + b * b);
}

int main() {
    float a, b, c;

    printf("Enter the first side: ");
    scanf("%f", &a);

    printf("Enter the second side: ");
    scanf("%f", &b);

    c = myhypot(a, b);

    printf("The length of the hypotenuse is: %g\n", c);

    return 0;
}
