/*  3 ways to write a loop that counts from 1 to 10  */

#include<stdio.h>

int main(){

printf("Using for loop: \n");

for(int i=1;i<=10;i++){
    printf("%d\n", i);
}


printf("Using while loop: \n");

int j=1;
while(j<=10){
    printf("%d\n",j);
    j++;
}


int k=1;
printf("Using do while loop: \n");
do{
printf("%d\n", k);
k++;
} while(k<=10);



return 0;
}


