#include <stdio.h>

int main()
{
    float x;

    for (x = 1.0; (int)(x * 10) <= 100; x = x + 0.1)
    {
        printf("%0.1f ", x);
    }

    return 0;
}