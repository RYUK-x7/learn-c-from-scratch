#include<stdio.h>
double avg();
int main()
{

    printf("Average = %f\n", avg());

    return 0;
}

double avg()
{
    int n, i;
    double sum, num;

    sum= 0.0;
    for(i=0;i<10;i++)
    {
        printf("Enter next number: ");
        scanf("%lf", &num);
        sum += num;
    }

    return sum /10.0;
}