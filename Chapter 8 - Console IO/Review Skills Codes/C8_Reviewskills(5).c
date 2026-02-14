#include<stdio.h>
#include<string.h>

int rstrlen (char *x, int *n);

int main()
{
    char arr[] = {"fuad"};
    int count = 0;
    int num = rstrlen(arr, &count);
    printf("%d", num-1);
    return 0;
}

int rstrlen (char *x, int *n)
{
    if (*x != '\0')
    {
        x++;
        rstrlen(x,n);
    }
    (*n)++;
    return *n;
}