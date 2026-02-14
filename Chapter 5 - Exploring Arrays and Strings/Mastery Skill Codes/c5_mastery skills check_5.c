#include <stdio.h>

#include <string.h> 
int main() {

    char Word[100];

    printf("Enter any word. It will be repeated back\n");
    printf("type the word 'quit' to stop the program.\n");

    while (1) {
        printf("Enter a word: ");
        
        scanf("%s", Word);
        if (strcmp(Word, "quit") == 0) {
            
            // The user wants to quit.
            printf("typed 'quit'! so, stop.\n");
            
            break; 
            
        } else {
            printf("You typed: %s\n", Word);
        }
        
    } // The 'while(1)' loop ends here.
    return 0;
}
