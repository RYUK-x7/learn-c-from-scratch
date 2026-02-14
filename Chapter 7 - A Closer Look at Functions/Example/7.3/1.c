#include <stdio.h>

void prompt(char *m, int *n);

int main(void) {
int i;

prompt("Enter a num: ", &i);
printf("Your number is: %d", i);

return 0;
}

void prompt(char *m, int *n) {
printf(m);
scanf("%d", n);
}