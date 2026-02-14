#include <stdio.h>
#include <string.h>

int main() {
    char dictionary[3][2][50] = {
        {"apple", "a fruit"},
        {"book", "a thing to read"},
        {"computer", "an electronic device"}
    };

    char word[50];
    int i, found = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; i < 3; i++) {
        if (strcmp(word, dictionary[i][0]) == 0) {
            printf("Meaning: %s\n", dictionary[i][1]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Word not found in dictionary.\n");
    }

    return 0;
}
