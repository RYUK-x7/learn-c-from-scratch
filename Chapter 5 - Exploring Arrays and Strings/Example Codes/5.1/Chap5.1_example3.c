/*The following program denotes that when the user first enters the message, which is
stored in a character array. When the user presses the ENTER, the entire message is 
then encoded by adding 1 to each letter*/

#include <stdio.h>
int main()
{
    int mess[80];
    int i;
    printf("Enter a message (less than 80 characters): ");
    for (i = 0; i < 80; i++)
    {
        mess[i] = getchar();
        if (mess[i] == '\n')
        {
            break;
        }
    }
    printf("\n");
    for (i = 0; mess[i] != '\n'; i++)
    {
        printf("%c\n", mess[i] + 1);
    }
    return 0;
}