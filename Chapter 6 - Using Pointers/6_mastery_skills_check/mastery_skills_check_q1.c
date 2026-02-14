#include <stdio.h>

int main() {
    double x = 10.5;
    double *p;  
    p = &x;     

    printf("Value of x using pointer: %.2lf\n", *p);
    return 0;
}
