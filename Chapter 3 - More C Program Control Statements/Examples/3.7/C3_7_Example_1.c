/* stopping a loop on user input  */

#include <stdio.h>

int main(void)
{
    int i;
    char ch;

    for(i = 1; i < 10000; i++) {
        if(i % 5 == 0) {
            printf(" %d \n more? (Y/N): ", i);
            ch = getchar();
            getchar();
            if(ch == 'N' || ch == 'n')
                break;
        }
    }

    return 0;
}
