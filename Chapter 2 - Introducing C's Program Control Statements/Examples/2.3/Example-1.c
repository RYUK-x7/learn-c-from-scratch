// improved feet-inch conversion

#include<stdio.h>

int main(void){
float num;
int choice;
    printf("1: Feet to Meters, 2: Meters to Feet. "); 
    printf("Enter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter number of feet: ");
        scanf("%f", &num);
        printf("In meters: %f", num / 3.28);
    }    
    if (choice == 2) {
        printf("Enter number of meters: ");
        scanf("%f", &num);
        printf("Feet: %f", num * 3.28);
    }
    else printf("Invalid choice");    
    return 0;
}