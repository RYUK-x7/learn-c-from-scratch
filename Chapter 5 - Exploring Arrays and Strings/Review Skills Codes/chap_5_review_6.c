// function to find and show phone number based on the name

#include <stdio.h>
#include <string.h>

void find_Number(char names[][30], char numbers[][15], int size, char searchName[])
{
    int found = 0;

    for (int i = 0; i < size; i++)
    {
        // compare entered name with stored names
        if (strcmp(names[i], searchName) == 0)
        {
            printf("Phone number of %s is %s\n", names[i], numbers[i]);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Sorry, name not found in the phonebook.\n");
}

int main()
{
    char names[5][30] = {"Rahim", "Karim", "Jodhu", "Modhu", "Kodhu"};

    char numbers[5][15] = {
        "01710000001",
        "01710000002",
        "01710000003",
        "01710000004",
        "01710000005"
    };

    char search[30];

    printf("Enter a name to find the phone number: ");
    scanf("%s", search);

    // calling our function to search for the name
    find_Number(names, numbers, 5, search);

    return 0;
}
