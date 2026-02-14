#include <stdio.h>

int main() {
    int val;
    int *ptr;
    int **pptr;

    ptr = &val;
    pptr = &ptr;

    **pptr = 200;

    printf("Value of val (directly): %d\n", val);
    printf("Value of val (using single indirection *ptr): %d\n", *ptr);
    printf("Value of val (using double indirection **pptr): %d\n", **pptr);

    return 0;
}