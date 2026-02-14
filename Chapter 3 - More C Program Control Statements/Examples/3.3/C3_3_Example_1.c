
/* This program continues to loop until a q is 
entered at the keyboard.Instead of testing a 
loop-control variable, the conditional test 
in this for checks the value of a character 
entered by the user. */




#include<stdio.h>
#include<conio.h>


int main(void){

int i;
char ch;

ch ='a'; /*Giving ch an initial value*/


for(i=0; ch!='q'; i++){
    printf("pass: %d\n", i);
    ch=getche();
    printf("\n");
}


    return 0;
}



