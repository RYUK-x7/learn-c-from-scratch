#include <stdio.h>
#include <string.h>

struct StringWrapper {
    char data[50];
};

void change_string(struct StringWrapper s)
{
    printf("Inside function: The received string is: %s\n", s.data);
    strcpy(s.data, "String was altered inside function");
    printf("Inside function: The modified string is: %s\n", s.data);
}

int main(void)
{
    struct StringWrapper my_wrapper;

    strcpy(my_wrapper.data, "Original string before function call");
    
    printf("Before function call: %s\n\n", my_wrapper.data);

    change_string(my_wrapper);

    printf("\nAfter function call: The original string remains: %s\n", my_wrapper.data);

    return 0;
}