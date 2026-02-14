/*  This program keeps taking character inputs until enter is pressd  */



#include <stdio.h>

int main() {
    char ch;

    printf("Keep typing characters. Press Enter to stop:\n");

    while(1){
        ch=getchar();  

    if(ch=='\n')  
        break;

        printf("You typed: %c\n", ch);
    }

    printf("You pressed Enter. Program ended.\n");
    return 0;
}