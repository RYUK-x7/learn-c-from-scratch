/* This program adds one to each letter and displays it. A simple code machine  */


#include<stdio.h>

int main(void){

 char ch;
 printf("Enter your message.\n");

    ch= getche();
    while(ch != '\r'){
        printf("%c", ch+1);
        ch=getche();
    }


    return 0;
}


