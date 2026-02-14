#include <stdio.h>

int main()
{
    char p[128], c[] = "wrong";
    int i, ok;

    printf("Enter password: ");
    scanf("%s", p);

    ok = 1;
    for (i = 0;; i++)
    {
        if (p[i] != c[i])
        {
            ok = 0;
            break;
        }
        if (p[i] == '\0' && c[i] == '\0')
            break;
    }

    if (ok)
        printf("Access permitted.\n");
    else
        printf("Password is wrong. \n Access denied.\n");

    return 0;
}
