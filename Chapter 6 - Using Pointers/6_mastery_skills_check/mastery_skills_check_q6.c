#include <stdio.h>

int main() {
    double *p;
    
        p = (double*)100;  

    printf("Original address: %p\n", p);

    p++;  

    printf("Address after p++: %p\n", p);

    return 0;
}
