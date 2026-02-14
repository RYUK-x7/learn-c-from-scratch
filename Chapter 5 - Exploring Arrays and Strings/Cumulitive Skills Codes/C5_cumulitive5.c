#include <stdio.h>

int main()
{
    char word[] = "concatenation";
    char guessWord[50];
    char ch;
    int i, len = 0, found, correct = 0, totalGuesses = 0;

    while (word[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        guessWord[i] = '-';
    }
    guessWord[len] = '\0';

    printf("Welcome to Hangman!\n");
    printf("The magic word has %d letters.\n", len);
    printf("You have 15 guesses to find it.\n\n");

    // game loop
    while (totalGuesses < 15)
    {
        printf("Word: %s\n", guessWord);
        printf("Enter a letter: ");
        scanf(" %c", &ch);

        totalGuesses++;
        found = 0;

        for (i = 0; i < len; i++)
        {
            if (word[i] == ch && guessWord[i] == '-')
            {
                guessWord[i] = ch;
                found = 1;
                correct++;
            }
        }

        if (found)
        {
            printf("Good guess!\n\n");
        }
        else
        {
            printf("Wrong guess.\n\n");
        }

        if (correct == len)
        {
            printf("Congratulations! You found the word '%s' in %d guesses.\n", word, totalGuesses);
            return 0;
        }
    }

    printf("Sorry, you lost! The word was '%s'.\n", word);

    return 0;
}
