#include <stdio.h>

void prompt(char *m, char *s);

int main(void) {
    char a[100]; 

    prompt("Please enter your name: ", a);

    printf("Hello, %s! Welcome.\n", a);

    return 0;
}

void prompt(char *m, char *s) {
    printf("%s", m);
    scanf("%s", s);
}