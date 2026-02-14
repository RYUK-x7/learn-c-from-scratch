#include <stdio.h>
int main(){
    char *p;

    *p = gets(p); // WRONG.

    printf("%s", *p);

    return 0;
}