#include <stdio.h>

void sqr_it(int num);

int main(void)
{
    sqr_it(10);   //correction: instead of 10.0 it will be 10
    return 0;
}

void sqr_it(int num)
{
    printf("%d", num * num);
}
