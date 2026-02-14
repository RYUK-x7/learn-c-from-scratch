/*  Stopping a while loop with q  */

#include<stdio.h>

int main(){

char ch;
printf("Press q to end the program: ");
ch= getchar();

while(ch!='q') ch= getchar();
printf("Found the q.");

return 0;

}