/*This program prints the strings in the table one character at a time*/

#include <stdio.h>
int main()
{
    char text[][80] = {
        "When", "in", "the",
        "Course", "of", "human",
        "events", ""};
    int i, j;
    for (i = 0; text[i][0] != '\0'; i++)
    {
        for (j = 0; text[i][j] != '\0'; j++)
        {
            printf("%c", text[i][j]);
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}