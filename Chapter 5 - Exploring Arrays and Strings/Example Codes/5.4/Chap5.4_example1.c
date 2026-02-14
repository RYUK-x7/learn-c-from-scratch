/*This program allows a user to enter the number of a server. It then looks up the server in
the table and reports the number of users*/

#include <stdio.h>
int main()
{
    int ServerUsers[5][2] = {
        1, 14,
        2, 28,
        3, 19,
        4, 8,
        5, 15};

    int server;
    int i;
    printf("Enter the server number: ");
    scanf("%d", &server);

    for (i = 0; i < 5; i++)
    {
        if (ServerUsers[i][0] == server)
        {
            printf("Number of users in server %d is %d\n", server, ServerUsers[i][1]);
            break;
        }
    }
    if (i == 5)
    {
        printf("Server %d not found.\n", server);
    }
    return 0;
}