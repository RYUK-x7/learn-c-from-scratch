#include <stdio.h>
#include <string.h>

int main(void)
{
    char *answers[] = {"Yes.", "No.", "Maybe."};
    char question[200];
    int length, index;

    printf("Ask your question: ");
    fgets(question, sizeof(question), stdin);
    question[strcspn(question, "\n")] = '\0';

    length = strlen(question);

    index = length % 3;

    printf("You asked: \"%s\"\n", question);
    printf("Answer: %s\n", answers[index]);

    return 0;
}