#include <stdio.h>

union int_long {
    int i;
    long l;
};

int main(void)
{
    union int_long x;

    x.i = 100;   
    x.l = x.i;     

    printf("Integer value : %d\n", x.i);
    printf("Long value    : %ld\n", x.l);

    return 0;
}
