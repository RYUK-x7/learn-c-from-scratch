/*  Program to convert gallons to liters and repeat  */

#include <stdio.h>

int main() {
    double gallons, liters;
    char repeat_char;

    do {
        printf("Enter gallons: ");
        scanf("%lf", &gallons);

        liters = gallons * 3.7854;

        printf("%.4lf gallons is %.4lf liters.\n", gallons, liters);

        printf("Do you want to convert another (y/n)? ");
        scanf(" %c", &repeat_char); 
        printf("\n");
        
    } while (repeat_char == 'y' || repeat_char == 'Y');

    return 0;
}