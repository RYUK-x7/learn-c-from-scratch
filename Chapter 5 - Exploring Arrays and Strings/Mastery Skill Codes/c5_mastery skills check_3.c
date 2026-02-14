#include <stdio.h>

int main() {
    int userNum[20]; 
    int howManyTimes[100];

    int i; 
    for (i = 0; i < 100; i++) {
        howManyTimes[i] = 0;
    }
    printf("Enter 20 whole numbers ( between 0 to 99 )\n");

    for (i = 0; i < 20; i++) {
        printf("Enter number %d: ", i + 1); 
        scanf("%d", &userNum[i]);
    }

    for (i = 0; i < 20; i++) {
        int currentNum = userNum[i];

        if (currentNum >= 0 && currentNum < 100) {
            howManyTimes[currentNum]++; 
        } else {
            printf("number %d (%d) was not between 0-99, so skipping it!\n", i+1, currentNum);
        }
    }
    int mode = 0;          
    int highestCount = 0;   
    for (i = 0; i < 100; i++) {
        
        if (howManyTimes[i] > highestCount) {
            highestCount = howManyTimes[i];           
            mode = i;
        }
    }   
    printf("The mode (the number that appeared most) is: %d\n", mode);
    printf("It appeared %d times.\n", highestCount);
    return 0;
}
