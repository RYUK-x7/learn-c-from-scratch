// corrected version


#include <stdio.h>

int main() {
    char str[100];
    char *p = str;   // p points to array

    printf("Enter a string: ");
    gets(p);

    printf("You entered: %s\n", p);
    return 0;
}
