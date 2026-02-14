#include <stdio.h>

int main() {
    char *p, str[80] = "this is a test";

    p = str;   

    
    printf("Using array indexing  : %c\n", str[2]);
    printf("Using pointer access  : %c\n", *(p + 2));

    return 0;
}
