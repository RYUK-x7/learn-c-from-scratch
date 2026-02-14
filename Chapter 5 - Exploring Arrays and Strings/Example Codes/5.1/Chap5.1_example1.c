/*This program reads the noonday temperature for each day of a month and then reports
 the month's average temperature, as well as its hottest and coolest days. */
 
#include <stdio.h>
int main()
{
    int temp[31], i, min, max, sum;
    int days;
    float avg;
    printf("How many days are there in the month? ");
    scanf("%d", &days);
    for (i = 0; i < days; i++)
    {
        printf("Enter the high temperature for day %d: ", i + 1);
        scanf("%d", &temp[i]);
    }
    sum = 0;
    for (i = 0; i < days; i++)
    {
        sum += temp[i];
    }
    avg = (float)sum / days;
    printf("Average = %.2f\n", avg);
    min = max = 0;
    for (i = 1; i < days; i++)
    {
        if (temp[i] < temp[min])
            min = i;
        if (temp[i] > temp[max])
            max = i;
    }
    printf("Minimum Temperature = %d\n", temp[min]);
    printf("Maximum Temperature = %d\n", temp[max]);
    return 0;
}