#include <stdio.h>

// Program that counts from 0 to 9 using a pointer

int main() {
    int numbers[10];   
    int *p;            


    for (int i = 0; i < 10; i++) {
        numbers[i] = i;
    }

    p = numbers;

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}

