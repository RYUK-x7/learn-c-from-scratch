#include <stdio.h>

int main(void)
{
    do
    {
        printf(".");
    } while (!kbhit());
    return 0;
}