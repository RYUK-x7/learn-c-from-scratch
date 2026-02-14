/*  Example of an initialization portion of a for loop being empty.
    This program asks the user for an integer value and then counts 
    down to 0 from that integer  */


#include<stdio.h>

int main(void){
    int i; 
    printf("Enter an integer: ");
    scanf("%d", &i);

    for(; i; i--) printf("%d ", i);
    

return 0;




}
