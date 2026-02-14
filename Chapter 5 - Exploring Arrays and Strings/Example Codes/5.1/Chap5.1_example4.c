/*This program teaches us the bubble sorting algorithm*/

#include <stdio.h>
int main()
{
    int item[100];
    int i, j, k, count;
    printf("How many numbers?");
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        scanf("%d", &item[i]);
    }
    for (i = 1; i < count; ++i)
        for (j = count - 1; j >= i; --j)
        {
            if (item[j - 1] > item[j])
            {
                k = item[j - 1];
                item[j - 1] = item[j];
                item[j] = k;
            }
        }
    for (i = 0; i < count; i++)
    {
        printf("%d ", item[i]);
    }
    return 0;
}