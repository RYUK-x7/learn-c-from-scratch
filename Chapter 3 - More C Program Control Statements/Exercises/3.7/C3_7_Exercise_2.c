// Tip calculation table

#include <stdio.h>

int main(void) {
    float amount;
    char choice;

    printf("\n================ Tip Calculation Table ================\n");

    for (amount = 1; amount <= 100; amount++) {
        if (amount == 1) {
            printf("---------------------------------------------------------\n");
            printf(" Amount($)    10%% Tip     15%% Tip     20%% Tip\n");
            printf("---------------------------------------------------------\n");
        }

        float tip10 = amount * 0.10f;
        float tip15 = amount * 0.15f;
        float tip20 = amount * 0.20f;

        printf("%.2f %.2f %.2f %.2f\n",
               amount, tip10, tip15, tip20);

        printf("\nContinue to next amount? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N') {
            printf("\nProgram stopped by user.\n");
            break;
        }
    }

    printf("\n================ End of Program ================\n");
    return 0;
}
