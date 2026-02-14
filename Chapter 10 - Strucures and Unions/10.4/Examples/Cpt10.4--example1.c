#include <stdio.h>

struct b_type {
    unsigned first : 1; 
    int middle     : 6;
    unsigned last  : 1;
};

int main() {
    struct b_type bits;

    bits.first = 1;   
    bits.middle = 45; 
    bits.last = 0;    

    printf("First bit = %u\n", bits.first);
    printf("Middle bits = %d\n", bits.middle);
    printf("Last bit = %u\n", bits.last);

    return 0;
}


