#include <stdio.h>
#include <stdlib.h>

union file_data {
    int i;
    char c;
};

int main(int argc, char *argv[])
{
    FILE *source;
    FILE *dest;
    union file_data data;

    if (argc != 3) {
        printf("Usage: %s source_filename destination_filename\n", argv[0]);
        exit(1);
    }

    source = fopen(argv[1], "rb");
    if (source == NULL) {
        printf("Error opening source file: %s\n", argv[1]);
        exit(1);
    }

    dest = fopen(argv[2], "wb");
    if (dest == NULL) {
        printf("Error creating destination file: %s\n", argv[2]);
        fclose(source);
        exit(1);
    }

    do {
        data.i = fgetc(source);
        if (data.i == EOF) break;
        fputc(data.c, dest);
    } while (1);

    fclose(source);
    fclose(dest);

    return 0;
}