/*Write a program that defines a 3x3x3 three dimensional array, and load it with the numbers 1 to 27*/



#include <stdio.h>

int main() {
    int arr[3][3][3];
    int num = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                arr[i][j][k] = num;
                num++;
            }
        }
    }

    printf("The 3x3x3 array contains:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%2d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
