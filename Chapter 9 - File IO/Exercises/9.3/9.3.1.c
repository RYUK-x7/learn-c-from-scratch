#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    if(argc != 2){
        printf("Usage: count <file>\n");
        exit(1);
    }
    if((fp = fopen(argv[1], "rb")) == NULL){
        printf("Cannot open the file \n");
        exit(1);
    }
    int count = 0;
    while(!feof(fp)){
        char ch = fgetc(fp);
        if(ferror(fp)){
            printf("Error reading the file");
        }
        if(feof(fp)) break;
        count++;
    }
    printf("Total bytes is %d\n", count);

    return 0;
}