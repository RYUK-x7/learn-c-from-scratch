/*Corrected code*/

#include <stdio.h>

int f1(void) {
    return 100;
}

int main(void) {
    int answer;
    answer = f1();
    printf("%d", answer);
    return 0;
}
