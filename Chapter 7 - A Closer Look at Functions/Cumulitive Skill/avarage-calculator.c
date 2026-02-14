#include <stdio.h>

float avg(float *arr, int n)
{
    float sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%f", &arr[i]);

    printf("Average = %g\n", avg(arr, n));

    return 0;
}
