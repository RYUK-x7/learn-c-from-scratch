// space, comma, and period counter
//  Cumulitive Skills Check 3 - Chapter 5

#include <stdio.h>

int main()
{
    char str[200];
    int spaces = 0, commas = 0, periods = 0;
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case ' ':
            spaces++;
            break;
        case ',':
            commas++;
            break;
        case '.':
            periods++;
            break;
        default:
            break;
        }
    }

    printf("\nNumber of spaces: %d", spaces);
    printf("\nNumber of commas: %d", commas);
    printf("\nNumber of periods: %d\n", periods);

    return 0;
}
