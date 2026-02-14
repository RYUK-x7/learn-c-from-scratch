#include <stdio.h>
int area(int l, int w);
int main(void)
{
    printf("area is %d", area(10, 13));
    return 0;
}
int area(int l, int w)
{
    return l * w;
}