#include <stdio.h>

int main(void)
{
    if (rename("MYFILE.TXT", "YOURFILE.TXT") == 0)
    {
        printf("Rename successful.\n");
    }
    else
    {
        printf("Rename failed.\n");
    }
    return 0;
}