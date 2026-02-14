//addition check and correct answer printer

#include<stdio.h>

#include <stdio.h>
int main(void){
    int answer;
    printf("What is 10+14?");
    scanf("%d", answer);
    if(answer == 10+14) printf("Right!");
    else {
        printf("Wrong");
        printf("Correct answer is 24");
    }    
    return 0;
}