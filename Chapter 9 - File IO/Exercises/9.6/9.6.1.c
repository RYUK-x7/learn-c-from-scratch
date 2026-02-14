/*C program that uses fseek() to display every other byte of a file specified on the command line.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;
    long offset = 0L;
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        exit(1);
    }
    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Error: Cannot open file '%s'.\n", argv[1]);
        exit(1);
    }

    printf("Displaying every other byte from the file:\n");
    printf("------------------------------------------\n");
    while (1) {
        if (fseek(fp, offset, SEEK_SET) != 0) {
            break;
        }
        ch = fgetc(fp);
        if (ch == EOF) {
            break; 
        }
        printf("%c", (char)ch);
        offset += 2L;
    }

    printf("\n------------------------------------------\n");
    fclose(fp);

    return 0;
}