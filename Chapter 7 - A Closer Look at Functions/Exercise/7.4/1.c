#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i;

    if(argc != 3){
        printf("Give two argyments\n");
        exit(1);
    }

    else{
        i = strcmp(argv[1], argv[2]);
        if(i == 0){
            printf("The strings are identical.\n");
        }
        else if(i < 0){
            printf("%s < %s.\n", argv[1], argv[2]);
        }
        else{
            printf("%s > %s.\n", argv[1], argv[2]);
        }
        return 0;
    }

}