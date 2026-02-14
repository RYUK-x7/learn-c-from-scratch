#include <stdio.h>

void printer(char ch)
{
    if (ch > 'z')
        return;
    printf("%c ", ch);
    printer(ch + 1);
}

int main()
{
    printf("Alphabet: ");
    printer('a');
    printf("\n");
    return 0;
}
