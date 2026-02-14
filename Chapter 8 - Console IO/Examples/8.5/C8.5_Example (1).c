#include <stdio.h>

int main(void)
{
    printf("%.5d\n", 10);
    printf("%8.2f\n", 99.95);
    printf("%.10s", "Not all of this will be printed\n");

    return 0;
}
