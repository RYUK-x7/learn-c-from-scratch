
#include <stdio.h>

int main(void)
{
    /* The fragment to check: */
    /*
    int count[10];
    ...
    count = count + 2;
    */

    /*
    This fragment is INCORRECT.
    'count' is an array name, which acts as a constant pointer to the first
    element of the array. Array names cannot be incremented or decremented.
    The statement 'count = count + 2;' attempts to assign a new address to the
    array name, which is illegal.
    */

    return 0;
}
