#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUES 32767

int main(void)
{
    FILE *fp_count, *fp_values;
    double values[MAX_VALUES];
    int count;
    
    if ((fp_count = fopen("COUNT", "rb")) == NULL) {
        printf("Cannot open COUNT file.\n");
        exit(1);
    }
    
    if (fread(&count, sizeof(int), 1, fp_count) != 1) {
        printf("Read error.\n");
        exit(1);
    }
    fclose(fp_count);
    
    if ((fp_values = fopen("VALUES", "rb")) == NULL) {
        printf("Cannot open VALUES file.\n");
        exit(1);
    }
    
    if (fread(values, sizeof(double), count, fp_values) != count) {
        printf("Read error.\n");
        exit(1);
    }
    
    fclose(fp_values);
    
    printf("%d values read:\n", count);
    for (int i = 0; i < count; i++) {
        printf("%f ", values[i]);
    }
    printf("\n");
    
    return 0;
}