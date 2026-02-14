/*  Transforming lowercase letters to upper case letters  */

#include <stdio.h>

int main()
{
    char x;
    printf("Enter lowercase letters. Press (ENTER) to quit.\n");

    do {
        scanf("%c", &x);
        if (x != '\n')
            printf("%c", x - 32);
    } while (x != '\n');

    return 0;
}
