/*  Counting the numbers of letters, digits and common punctuations  */


#include <stdio.h>

int main(void)
{
    char ch;
    int digit = 0;
    int punc = 0;
    int letter = 0;

    printf("Enter characters. ENTER to stop.\n");

    do {
        ch = getchar();

        switch(ch) {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                digit++;
                break;
            
            case ';':
            case '?':
            case ',':
            case '!':
            case ':':
            case '\'':
            case '"':
                punc++;
                break;
            default:
                letter++;
                
        }
    } while(ch!='\n');

    printf("\nDigits: %d\n", digit);
    printf("Punctuation: %d\n", punc);
    printf("Letters: %d\n", letter-1);

    return 0;
}
