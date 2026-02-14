#include <stdio.h>

int main()
{
    char name[20], date[9], phone[12];
    printf("Enter your first name, date(MM/DD/YY), and phone number(01XXXXXXXXX): ");
    scanf("%19s %8[0-9/] %11[0-9]", name, date, phone);
    printf("Name: %s\nDate: %s\nPhone: %s\n", name, date, phone);
}