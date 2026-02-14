/*  Program to read 10 chars and print periods equal to ASCII value  */

#include <stdio.h>

int main(void) {
    int i, j;
    char ch;

    printf("Enter 10 characters:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &ch);

        printf("Output for '%c' (ASCII %d):\n", ch, ch);
        for (j = 0; j < ch; j++) {
            printf(".");
        }
        printf("\n\n");
    }

    return 0;
}