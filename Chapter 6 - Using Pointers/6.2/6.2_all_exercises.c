#include <stdio.h>
/* Theoretical questions
    1 -> This fragment is wrong because you cant multiply a pointer.
         Only addition or subtraction with integers is allowed.
       

    2 -> No, Pointer arithmetic only supports integer addition/subtraction.

    3 -> If p is a float pointer pointing to address 100,
         and each float is 4 bytes, then:
             p = p + 2;
         moves the pointer 8 bytes forward.
         So, new address = 108.
*/

int main() {

    // 3 -> 
    float *ptr;
    ptr = (float *)100;  // let pointer point to address 1002
    ptr = ptr + 2;       // now it points to 1010 
    printf("New value of p: %p\n", ptr); 

    return 0;
}

