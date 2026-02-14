#include <stdio.h>

void mystrcat(char *x, const char *y) {
    while(*x != '\0') {
        x++;
    }
    while(*y != '\0') {
        *x = *y;
        x++;
        y++;
    }
    *x = '\0';
}

int main() {
    char a[100] = "Hello ";
    char b[] = "World!";

    mystrcat(a, b);

    printf("%s\n", a);

    return 0;
}
