#include <stdio.h>
#include <string.h>

void enter(char title[][20], char author[][20], char publisher[][20]);
void searchByAuthor(char title[][20], char author[][20], char publisher[][20]);
void searchByTitle(char title[][20], char author[][20], char publisher[][20]);

int main()
{
    char choice;
    do
    {
        char title[100][20], author[100][20], publisher[100][20];

        printf("\n\nCard Catalog:\n1. Enter\n2. Search by Author\n3. Search by Title\n4. Quit\nChoose an option (1-4): ");
        choice = getche();
        printf("\n\n\n");
        switch (choice)
        {
            case '1':
                enter(title, author, publisher);
                break;
            case '2':
                searchByAuthor(title, author, publisher);
                break;
            case '3':
                searchByTitle(title, author, publisher);
                break;
        }
    } while (choice != '4');
}

void enter(char title[][20], char author[][20], char publisher[][20])
{
    static int count = 0;
    do{
        if (count < 100)
        {
            printf("Enter book title: ");
            gets(title[count]);
            printf("Enter author name: ");
            gets(author[count]);
            printf("Enter publisher name: ");
            gets(publisher[count]);
            count++;
        }
        else
        {
            printf("Catalog is full.\n");
        }
    } while(!title[count-1][0] == '\0');
    printf("Books indexed successfully.\n");
}

void searchByAuthor(char title[][20], char author[][20], char publisher[][20])
{
    char searchAuthor[20];
    int found = 0;
    printf("Enter author name to search: ");
    gets(searchAuthor);
    for (int i = 0; i < 100; i++)
    {
        if (strcmp(author[i], searchAuthor) == 0)
        {
            printf("Book Title: %s, Publisher: %s\n", title[i], publisher[i]);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No books found by that author.\n");
    }
}

void searchByTitle(char title[][20], char author[][20], char publisher[][20])
{
    char searchTitle[20];
    int found = 0;
    printf("Enter book title to search: ");
    gets(searchTitle);
    for (int i = 0; i < 100; i++)
    {
        if (strcmp(title[i], searchTitle) == 0)
        {
            printf("Author Name: %s, Publisher Name: %s\n", author[i], publisher[i]);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No authors found for that book title.\n");
    }
}