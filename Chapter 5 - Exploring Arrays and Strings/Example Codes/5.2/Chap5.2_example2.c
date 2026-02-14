/*The following program allows the user to add, subtract, multiply or divide
but does not use a menu. In stead it uses a command base interface*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char command[100], temp[100];
    int i, j;
    for (;;)
    {
        printf("Operation? ");
        gets(command);
        /*see if user wants to stop*/
        if (!strcmp(command, "quit"))
        {
            break;
        }
        printf("Enter the first number: ");
        gets(temp);
        i = atoi(temp);
        printf("Enter the second number: ");
        gets(temp);
        j = atoi(temp);
        // now perform operation
        if (!strcmp(command, "add"))
        {
            printf("Result: %d\n", i + j);
        }
        else if (!strcmp(command, "subtract"))
        {
            printf("Result: %d\n", i - j);
        }
        else if (!strcmp(command, "multiply"))
        {
            printf("Result: %d\n", i * j);
        }
        else if (!strcmp(command, "divide"))
        {
            if (j != 0)
            {
                printf("Result: %d\n", i / j);
            }
            else
            {
                printf("Error: Division by zero is not possible\n");
            }
        }
        else
        {
            printf("Unknown operation: %s\n", command);
        }
    }
}