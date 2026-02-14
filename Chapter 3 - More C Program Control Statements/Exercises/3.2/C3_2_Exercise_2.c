// computing the area of either a circle, rectangle, or triangle

#include <stdio.h>
int main()
{
    char a;
    int s1, s2;
    float r;

    printf("Compute area of Circle, Square, or Triangle? ");
    a = getchar();

    if (a == 'C' || a == 'c')
    {
        printf("Enter radius of circle: ");
        scanf("%f", &r);
        printf("Area is: %f", 3.1416 * r * r);
    }

    else if (a == 'S' || a == 's')
    {
        printf("Enter length of first side: ");
        scanf("%d", &s1);
        printf("Enter length of second side: ");
        scanf("%d", &s2);
        printf("Area is: %d", s1 * s2);
    }

    else if (a == 'T' || a == 't')
    {
        printf("Enter length of base: ");
        scanf("%d", &s1);
        printf("Enter height: ");
        scanf("%d", &s2);
        printf("Area is: %d", (s1 * s2) / 2);
    }

    return 0;
}