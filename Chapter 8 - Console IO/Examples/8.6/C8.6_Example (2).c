#include <stdio.h>

int main(void)
{
    char str[80];

    printf("Enter letters, anything else to stop:\n");
    scanf("%[a-zA-Z]", str);
    printf("%s", str);

    return 0;
}
