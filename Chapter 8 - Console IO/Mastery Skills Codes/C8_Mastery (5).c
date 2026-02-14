#include <stdio.h>

// Advantage of puts over printf and vice versa
int main()
{
    char str[] = "Hello, World!";
    printf("Using printf: %s\n", str);
    puts("Using puts:");
    puts(str);
    return 0;

    // printf allows formatted output, while puts is simpler and automatically adds a newline.
}