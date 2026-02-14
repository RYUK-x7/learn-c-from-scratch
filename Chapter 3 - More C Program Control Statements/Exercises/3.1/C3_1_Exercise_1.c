// displaying the letter that comes earliest in the alphabet

#include <stdio.h>
#include <conio.h>

int main()
{
    char a, smallest;
    printf("Enter 10 letters: \n");

    smallest = 'z';

    for (int i = 0; i < 10; i++)
    {
        scanf(" %c",&a); 
        if (a < smallest)
            smallest = a;
    }

    printf("\nThe smallest character is: %c", smallest);
    return 0;
}