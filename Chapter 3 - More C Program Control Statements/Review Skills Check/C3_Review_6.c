/*  Converting different units  */




#include <stdio.h>

int main() {
    int choice;
    float feet, meters, ounces, pounds;

    do {
        
        printf("Convert:\n");
        printf("1. Feet to Meters\n");
        printf("2. Meters to Feet\n");
        printf("3. Ounces to Pounds\n");
        printf("4. Pounds to Ounces\n");
        printf("5. Quit\n");
        printf("Enter the number of your choice: ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1:
                printf("Enter feet: ");
                scanf("%f", &feet);
                meters = feet*0.3048;
                printf("%.2f feet = %.2f meters\n", feet, meters);
                break;

            case 2:
                printf("Enter meters: ");
                scanf("%f", &meters);
                feet = meters/0.3048;
                printf("%.2f meters = %.2f feet\n", meters, feet);
                break;

            case 3:
                printf("Enter ounces: ");
                scanf("%f",&ounces);
                pounds = ounces/16;
                printf("%.2f ounces = %.2f pounds\n", ounces, pounds);
                break;

            case 4:
                printf("Enter pounds: ");
                scanf("%f",&pounds);
                ounces = pounds * 16;
                printf("%.2f pounds = %.2f ounces\n", pounds, ounces);
                break;

            case 5:
                printf("You have quit the program.\n");
                break;

            default:
                printf("Invalid input! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
