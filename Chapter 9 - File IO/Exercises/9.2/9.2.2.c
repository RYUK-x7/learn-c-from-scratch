#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int ch;
    int count[26] = {0};

    if (argc != 2) {
        printf("Usage: count <file name>\n");
        exit(1);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch >= 'a' && ch <= 'z') ch = ch - ('a' - 'A');
            count[ch - 'A']++;
        }
    }

    fclose(fp);

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d \n", 'A' + i, count[i]);
        }
    }

    return 0;
}