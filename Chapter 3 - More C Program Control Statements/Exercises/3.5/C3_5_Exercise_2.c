/* Program to display a menu and validate input with a do-while loop */

#include <stdio.h>

int main(void) {
    int choice;

    printf("Mailing list menu:\n");
    printf("1. Enter addresses\n");
    printf("2. Delete address\n");
    printf("3. Search the list\n");
    printf("4. Print the list\n");
    printf("5. Quit\n");

    do {
        printf("\nEnter the number of your choice (1-5): ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 5);

    printf("\nYou selected option %d.\n", choice);

    return 0;
}