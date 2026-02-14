#include <stdio.h>

int main()
{
    char first[20], middle[20], last[20];
    printf("Enter your name: ");
    scanf("%20s %20s %20s", &first, &middle, &last);
    printf("%s %s %s\n", last, first, middle);
}