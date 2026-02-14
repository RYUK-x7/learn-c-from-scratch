/*Writre a program that repeatedly input strings . Each time a string is input, concatenate it with a second string called bigstr. Add newlines to the end
of each string .If the user types quite , stop inputting and display bigstr (which will contain a record of all strings input) Also stop if bigstr will
be overrun by the next concatenation*/




#include <stdio.h>
#include <string.h>

int main() {
    char bigstr[500];
    char str[100];
    bigstr[0] = '\0';

    printf("Enter strings (type 'quit' to stop):\n");

    while (1) {
        printf("> ");
        gets(str);

        if (strcmp(str, "quit") == 0)
            break;

        if (strlen(bigstr) + strlen(str) + 2 > sizeof(bigstr)) {
            printf("Cannot add more — bigstr would overflow!\n");
            break;
        }

        strcat(bigstr, str);
        strcat(bigstr, "\n");
    }

    printf("\nAll strings entered:\n");
    printf("%s", bigstr);

    return 0;
}


















