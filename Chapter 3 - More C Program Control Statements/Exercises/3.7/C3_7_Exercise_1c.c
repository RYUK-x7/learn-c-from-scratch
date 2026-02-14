// using break in do-while loop

#include <stdio.h>

int main(void)
{
    int guess;
    int secret_number = 7;

    printf("Guess the secret number (1-10):\n");

    do {
        printf("Your guess: ");
        scanf("%d", &guess);

        if(guess == secret_number) {
            printf("You got it! Breaking out.\n");
            break;
        }

        printf("Wrong! Try again...\n");

    } while(1);

    printf("Loop finished. You win!\n");
    return 0;
}