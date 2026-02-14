

#include <stdio.h>

int main(void)
{
    /* Initialize a pointer to the long string constant.
       The advantage is that the message can be easily changed by modifying 
       this one line, and all subsequent uses of the pointer will reflect it. */
    char *pInDisK = "Insert disk into drive A, then press ENTER";

    printf("%s\n", pInDisK);
    /* ... The program would perform some action here, waiting for the user ... */

    /* The program prints the message again */
    printf("%s\n", pInDisK);

    return 0;
}
