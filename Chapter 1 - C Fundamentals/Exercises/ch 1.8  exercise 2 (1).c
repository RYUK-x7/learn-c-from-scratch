/*Convertion of dollars to pounds with function convert()*/

#include <stdio.h>

double convert(double dollars) {
    double pounds = dollars / 2.00;
    return pounds;
}

int main() {
    double dollars_amount;
    double pounds_amount;

    printf("Enter an amount in dollars: ");
    scanf("%lf", &dollars_amount);

    pounds_amount = convert(dollars_amount);

    printf("The converted amount is %f pounds\n", pounds_amount);

    return 0;
}
