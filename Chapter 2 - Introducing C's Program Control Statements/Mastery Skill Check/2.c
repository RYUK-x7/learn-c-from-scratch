// square footage of a house

#include <stdio.h>

int main() {
    int rooms;
    float length, width, area, totalArea = 0;

    printf("Enter the number of rooms in the house: ");
    scanf("%d", &rooms);

    for (int i = 1; i <= rooms; i++) {
        printf("\nEnter the length of room %d (in feet): ", i);
        scanf("%f", &length);
        printf("Enter the width of room %d (in feet): ", i);
        scanf("%f", &width);

        area = length * width;
        printf("Area of room %d: %.2f square feet\n", i, area);

        totalArea += area;
    }

    printf("\nTotal square footage of the house: %.2f square feet\n", totalArea);

    return 0;
}
