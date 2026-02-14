#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int search_value;
    int current_value;
    long location = 0; 
    if (argc != 3) {
        printf("Usage: %s <filename> <integer_value_to_find>\n", argv[0]);
        exit(1);
    }


    search_value = atoi(argv[2]);


    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Error: Cannot open file '%s'.\n", argv[1]);
        exit(1);
    }

    
    while (fread(&current_value, sizeof(int), 1, fp) == 1) {
        if (current_value == search_value) {
            
            location = ftell(fp) - sizeof(int);

            printf("Value %d found at byte location %ld.\n", search_value, location);

            
            fclose(fp);
            return 0;
        }

    
    }
    printf("Value %d not found in the file.\n", search_value);

    fclose(fp);
    return 0;
}