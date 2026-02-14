// guess the magic number

#include<stdio.h>

int main(){
    int g;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your guess: ");
        scanf("%d", &g);
        if(g == 56) {
            printf("RIGHT!");
            break;
        }
        else if (g < 56) printf("The number is greater. Try again.\n");
        else if (g > 56) printf("The number is smaller. Try again.\n");
    }
    if (g!=56) printf("Out of guesses!");
}