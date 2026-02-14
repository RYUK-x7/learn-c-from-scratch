#include <stdio.h>
struct s_type
{
    int i;
    char ch;
    double d;
};

void struct_swap(struct s_type *a, struct s_type *b);

int main()
{
    struct s_type var1 = {
        .i = 10,
        .ch = 'A',
        .d = 10.10};
    struct s_type var2 = {
        .i = 20,
        .ch = 'B',
        .d = 20.20};

    printf("--- Before Swap ---\n");
    printf("var1: i = %d, ch = '%c', d = %.2f\n", var1.i, var1.ch, var1.d);
    printf("var2: i = %d, ch = '%c', d = %.2f\n", var2.i, var2.ch, var2.d);
    struct_swap(&var1, &var2);

    printf("\n--- After Swap ---\n");
    printf("var1: i = %d, ch = '%c', d = %.2f\n", var1.i, var1.ch, var1.d);
    printf("var2: i = %d, ch = '%c', d = %.2f\n", var2.ch, var2.ch, var2.d);

    return 0;
}
void struct_swap(struct s_type *a, struct s_type *b)
{
    struct s_type temp = *a;
    *a = *b;
    *b = temp;
}