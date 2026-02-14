#include <stdio.h>

int main() {
    int x;
    int *p;
    
    p = &x;      
    *p = 50;     

    printf("Value of x is: %d\n", x);
    return 0;
}
