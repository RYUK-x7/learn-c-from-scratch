#include <stdio.h>

union dbl_char {
    double d;
    char c[8];
};

void write_double(double x, FILE *fp);
double read_double(FILE *fp);

int main(void)
{
    FILE *fp;
    double num1 = 12345.6789, num2;

    fp = fopen("test.dat", "wb");
    if (!fp) {
        printf("Cannot open file for writing.\n");
        return 1;
    }

    write_double(num1, fp);
    fclose(fp);

    fp = fopen("test.dat", "rb");
    if (!fp) {
        printf("Cannot open file for reading.\n");
        return 1;
    }

    num2 = read_double(fp);
    fclose(fp);

    printf("Written value : %lf\n", num1);
    printf("Read value    : %lf\n", num2);

    return 0;
}

void write_double(double x, FILE *fp)
{
    union dbl_char u;
    int i;

    u.d = x;
    for (i = 0; i < 8; i++)
        putc(u.c[i], fp);  
}

double read_double(FILE *fp)
{
    union dbl_char u;
    int i;

    for (i = 0; i < 8; i++)
        u.c[i] = getc(fp); 

    return u.d;
}
