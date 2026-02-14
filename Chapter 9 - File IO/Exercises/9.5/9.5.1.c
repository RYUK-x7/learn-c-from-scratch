#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUES 32767

int main(void)
{
    FILE *fp_values, *fp_count;
    double values[MAX_VALUES];
    int count = 0;
    
    if ((fp_values = fopen("VALUES", "wb")) == NULL) {
        printf("Cannot open VALUES file.\n");
        exit(1);
    }
    if ((fp_count = fopen("COUNT", "wb")) == NULL) {
        printf("Cannot open COUNT file.\n");
        exit(1);
    }
    
    printf("Enter double values (up to %d). Enter -999 to stop:\n", MAX_VALUES);
    
    while (count < MAX_VALUES) {
        printf("Value %d: ", count + 1);
        if (scanf("%lf", &values[count]) != 1) break;
        if (values[count] == -999) break;
        count++;
    }
    
    if (fwrite(values, sizeof(double), count, fp_values) != count) {
        printf("Write error.\n");
        exit(1);
    }
    
    if (fwrite(&count, sizeof(int), 1, fp_count) != 1) {
        printf("Write error.\n");
        exit(1);
    }
    
    fclose(fp_values);
    fclose(fp_count);
    printf("Wrote %d values.\n", count);
    return 0;
}