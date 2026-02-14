/*This program loads a1 wuth the numbers through 1 to 10 and then copies them into a2 */

#include <stdio.h>
int main()
{
    int a1[10], a2[10], i;
    for (i = 1; i < 11; i++)
        a1[i - 1] = i;
    for (i = 0; i < 10; i++)
        a2[i] = a1[i];
    for (i = 0; i < 10; i++)
        printf("%d ", a2[i]);
    return 0;
}