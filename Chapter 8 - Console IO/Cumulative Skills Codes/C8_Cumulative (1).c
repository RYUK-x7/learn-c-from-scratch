#include <stdio.h>

int main()
{
    char name[9][20];
    double avg[9], total = 0.0;
    for (int i = 0; i < 9; i++)
    {
        printf("Enter name and average score for player %d: ", i + 1);
        scanf("%19s %lf", name[i], &avg[i]);
        total += avg[i];
    }

    int lowestIndex = 0, highestIndex = 0;
    for (int i = 0; i < 9; i++)
    {
        if (avg[i] < avg[lowestIndex])
        {
            lowestIndex = i;
        }
        if (avg[i] > avg[highestIndex])
        {
            highestIndex = i;
        }
    }

    printf("Lowest Average: %s with %.2f\n", name[lowestIndex], avg[lowestIndex]);
    printf("Highest Average: %s with %.2f\n", name[highestIndex], avg[highestIndex]);
    printf("Team Average: %.2f\n", total / 9.0);
}