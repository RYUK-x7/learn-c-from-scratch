#include <stdio.h>

int main() {

    printf("'initialize' an array!\n");
    
    int items[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("create the 'items' array. print all the values inside it:\n");

    int i;

    for (i = 0; i < 10; i++) {
    
        printf("Place %d has the value: %d\n", i, items[i]);
    }

    printf("array is filled up right when we make it.\n");

    return 0;
}
