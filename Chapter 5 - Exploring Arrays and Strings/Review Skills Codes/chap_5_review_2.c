// function to check if the password is correct

#include <stdio.h>
#include <string.h>

int check_Password(char input[])
{
    char correct[] = "Tristan";
    if (strcmp(input, correct) == 0)
        return 1; // passwords match
    else
        return 0; // passwords don't match
}

int main()
{
    char pass[20];
    int tries = 0, success = 0;

    printf("Enter password to access the system.\n");

    while (tries < 3)
    {
        printf("Attempt %d: ", tries + 1);
        scanf("%s", pass);

        if (check_Password(pass))
        {
            success = 1;
            break;
        }

        else
        {
            printf("Incorrect password.\n");
        }
        tries++;
    }

    if (success)
        printf("Log-on Successful\n");
    else
        printf("Access Denied\n");

    return 0;
}
