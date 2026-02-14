/* This program decodes the messages of the program in Example 2 of 3.4  */

#include<stdio.h>
int main(){

printf("Enter the encoded message. Press '#' when the you are done writing it.: ");

char inp;
while(1){
    scanf(" %c", &inp);
    if(inp=='#'){
        break;
    }
    printf("Decoded letter: %c\n", inp-1);
}


return 0;

}

