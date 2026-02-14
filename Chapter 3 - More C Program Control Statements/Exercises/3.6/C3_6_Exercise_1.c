/* Program to find all prime numbers between 2 and 1000 */

#include <stdio.h>

int main(void) {
    int num, i;
    int is_prime;

    printf("Prime numbers between 2 and 1000:\n");

    for (num = 2; num <= 1000; num++) {
        is_prime = 1; 

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}