/* Iteration of numbers till it reaches 0 and then sounding the bell */

#include<stdio.h>

int main(void){

int x;

printf("Enter a number: ");
scanf("%d", &x);

for( ; x; x--) printf("\a");


return 0;
}