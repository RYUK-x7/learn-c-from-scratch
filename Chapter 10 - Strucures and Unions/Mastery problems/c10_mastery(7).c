/*
displaying the value  of the high-order and low odrder bytes of a short integers.

*/

#include <stdio.h> 

union short_converter {
    short int my_short_int; 
    char my_bytes[2];     
};


union short_converter converter;

int main() {

    printf("Enter a short integer : ");
    
   
    scanf("%hd", &converter.my_short_int);

    printf("\nYou entered: %d\n", converter.my_short_int);

    
    printf("The first byte is: %d\n", converter.my_bytes[0]);
    printf("The second byte is: %d\n", converter.my_bytes[1]);

   

    return 0;
}

