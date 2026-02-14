
#include <stdio.h>
#include <string.h>

struct address
{
    char street[50];
    char city[30];
    char state[20];
    char zip_code[15];
};

struct directory_entry
{
    char name[50];
    char phone_number[15];

    struct address mailing_address;
};

void display_entry(struct directory_entry entry)
{
    printf("--- Directory Entry ---\n");
    printf("Name: %s\n", entry.name);
    printf("Phone: %s\n", entry.phone_number);
    printf("Address:\n");
    printf("  Street: %s\n", entry.mailing_address.street);
    printf("  City: %s\n", entry.mailing_address.city);
    printf("  State: %s\n", entry.mailing_address.state);
    printf("  ZIP: %s\n", entry.mailing_address.zip_code);
    printf("-----------------------\n");
}

int main()
{

    struct directory_entry person1;

    strcpy(person1.name, "Alice Johnson");
    strcpy(person1.phone_number, "555-1234");

    strcpy(person1.mailing_address.street, "123 Main St");
    strcpy(person1.mailing_address.city, "Anytown");
    strcpy(person1.mailing_address.state, "CA");
    strcpy(person1.mailing_address.zip_code, "90210");

    display_entry(person1);

    struct directory_entry person2 = {
        "Bob Smith",
        "555-9876",
        {"456 Oak Ave",
         "Sometowne",
         "NY",
         "10001"}};

    display_entry(person2);

    return 0;
}
