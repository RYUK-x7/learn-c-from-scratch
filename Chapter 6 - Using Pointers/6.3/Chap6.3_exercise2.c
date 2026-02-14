
#include <stdio.h>

int main(void)
{
    int temp[5] = {10, 19, 23, 8, 9};
    int *p;

    p = temp;
    
    /* The fragment to see:
       printf("%d", *(p + 3));
    */

    /*
    1. 'temp' is an array of 5 integers.
    2. 'p' is an integer pointer, set to point to the start of 'temp'
    3. The expression 'p + 3' points to the 4th element of the array (temp[0+3] or temp[3]).
    4. The indirection operator '*' dereferences the pointer, giving the value at that location.
    5. The value at temp[3] is 8.
    */

    printf("The fragment will display: %d\n", *(p + 3));

    return 0;
}
