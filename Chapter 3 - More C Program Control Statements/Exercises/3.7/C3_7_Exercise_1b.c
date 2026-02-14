// using break in while loop

#include <stdio.h>

int main(void)
{
    int num;
    int total = 0;

    printf("Enter numbers to add. Enter 0 to stop.\n");

    while(1) {

        printf("Enter a number: ");
        scanf("%d", &num);

        if(num == 0) {
            printf("Zero detected. Breaking out.\n");
            break;
        }

        total = total + num;
        printf("Current total is: %d\n", total);
    }

    printf("Loop finished. The final total is: %d\n", total);
    return 0;
}
