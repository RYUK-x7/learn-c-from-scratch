// function to find the sum of even and odd numbers

#include <stdio.h>

void find_Sum(int arr[], int n)
{
    int even_Sum = 0, odd_Sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even_Sum += arr[i]; // if number is even, add to even_Sum
        else
            odd_Sum += arr[i]; // otherwise add to odd_Sum
    }
    printf("Sum of even numbers = %d\n", even_Sum);
    printf("Sum of odd numbers = %d\n", odd_Sum);
}

int main()
{
    int numbers[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    find_Sum(numbers, 10);
    return 0;
}
