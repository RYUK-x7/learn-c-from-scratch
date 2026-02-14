/*This program uses an initialized string table to translate between German and English */

#include <stdio.h>
#include <string.h>

char words[][2][40] = {
    "dog", "Hund",
    "no", "nein",
    "year", "Jahr",
    "child", "Kind",
    "I", "ich",
    "drive", "fahren",
    "house", "Haus",
    "to", "zu"

};
int main()
{
    char english[80];
    int i;
    printf("Enter an English word: ");
    gets(english);
    i = 0;
    while (strcmp(words[i][0], ""))
    {
        if (!strcmp(english, words[i][0]))
        {
            printf("German translation: %s\n", words[i][1]);
            break;
        }
        i++;
    }
    if (!strcmp(words[i][0], ""))
    {
        printf("Translation not found.\n");
    }
    return 0;
}