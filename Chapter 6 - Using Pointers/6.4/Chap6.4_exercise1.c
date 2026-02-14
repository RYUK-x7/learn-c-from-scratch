

#include <stdio.h>

int main(void)
{
    /* Create three character pointers and assign them to string constants */
    char *s1 = "one";
    char *s2 = "two";
    char *s3 = "three";

    printf("All six permutations:\n");

    /* Permutation 1: one two three */
    printf("%s %s %s\n", s1, s2, s3);

    /* Permutation 2: one three two */
    printf("%s %s %s\n", s1, s3, s2);

    /* Permutation 3: two one three */
    printf("%s %s %s\n", s2, s1, s3);

    /* Permutation 4: two three one */
    printf("%s %s %s\n", s2, s3, s1);

    /* Permutation 5: three one two */
    printf("%s %s %s\n", s3, s1, s2);

    /* Permutation 6: three two one */
    printf("%s %s %s\n", s3, s2, s1);

    return 0;
}