#include <stdio.h>

int main(void)
{
    unsigned char status;

    
    status = 0b1011;   

    printf("Device Status Report:\n");

    if (status & 1)
        printf("Power ON\n");
    else
        printf("Power OFF\n");

    if (status & 2)
        printf("Paper OUT\n");
    else
        printf("Paper OK\n");

    if (status & 4)
        printf("Error detected\n");
    else
        printf("No Error\n");

    if (status & 8)
        printf("Data Ready\n");
    else
        printf("No Data Ready\n");

    return 0;
}