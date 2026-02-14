// improved++ addition drill

#include <stdio.h>
int main(void){
    int answer, count, correct;
    for (count=1; count <11; count =count+1){
        printf("What is %d + %d?", count, count);
        printf("\n"); 
        scanf("%d", &answer);
        if (answer == count+count) {
            printf("Right! ");
            correct++;
        } 
        else {
            printf("Sorry, you're wrong. ");
            printf("The answer is %d\n", count+count);
        }
    }
    printf("%d correct guesses\n", correct);
    printf("%d wrong guesses", 10-correct); 
    return 0;
}