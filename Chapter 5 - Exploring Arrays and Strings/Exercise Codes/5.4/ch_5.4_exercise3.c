/*Write a program that initializes a 10x3 array so that the first element of each row contains a number , the second element contain its square and the third
element contains its cube . Start with 1 and stop at 10*/





#include <stdio.h>

int main() {
    int table[][3] = {
        {1, 1*1, 1*1*1},
        {2, 2*2, 2*2*2},
        {3, 3*3, 3*3*3},
        {4, 4*4, 4*4*4},
        {5, 5*5, 5*5*5},
        {6, 6*6, 6*6*6},
        {7, 7*7, 7*7*7},
        {8, 8*8, 8*8*8},
        {9, 9*9, 9*9*9},
        {10, 10*10, 10*10*10}
    };

    int cube, i, found = 0;

    printf("Enter a cube value: ");
    scanf("%d", &cube);

    for (i = 0; i < 10; i++) {
        if (table[i][2] == cube) {
            printf("Cube root = %d\n", table[i][0]);
            printf("Square of root = %d\n", table[i][1]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Cube not found in the table.\n");
    }

    return 0;
}
