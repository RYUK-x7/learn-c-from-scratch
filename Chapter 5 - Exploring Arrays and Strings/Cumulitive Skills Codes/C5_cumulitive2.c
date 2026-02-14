// string encoder
// Cumulitive Skills Check 2 - Chapter 5

#include <stdio.h>

int findLength(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

// encode
void encodeString(char str[], char encoded[])
{
    int left = 0;
    int len = findLength(str);
    int right = len - 1;
    int index = 0;

    while (left <= right)
    {
        encoded[index++] = str[left++];

        if (left <= right)
        {
            encoded[index++] = str[right--];
        }
    }
    encoded[index] = '\0';
}

int main()
{
    char str[100];
    char encoded[100];

    printf("Enter a string: ");
    gets(str);

    encodeString(str, encoded);

    printf("\nEncoded string: %s\n", encoded);

    return 0;
}
