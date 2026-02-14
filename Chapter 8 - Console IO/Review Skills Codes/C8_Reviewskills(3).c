#include<stdio.h>
#include<math.h>

double hypot (double n1, double n2);

int main()
{
    double len1, len2;
    printf("Enter the length of the sides: \n");
    scanf("%lf %lf", &len1, &len2);
    double n = hypot(len1, len2);
    printf("Length of hypotenuse: %lf", n);
    return 0;
}

double hypot (double n1, double n2)
{
    double num = sqrt(pow(n1,2) + pow(n2,2));
    return num;
}