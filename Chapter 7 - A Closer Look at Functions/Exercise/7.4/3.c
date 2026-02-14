#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc != 4){
        printf("Specify the operation followed by two numbers.\n");
        exit(1);
    }

    if(strcmp(argv[1], "add") == 0){
        printf("Result: %d\n", atoi(argv[2]) + atoi(argv[3]));
    }
    else if(strcmp(argv[1], "subtract") == 0){
        printf("Result: %d\n", atoi(argv[2]) - atoi(argv[3]));
    }
    else if(strcmp(argv[1], "multiply") == 0){
        printf("Result: %d\n", atoi(argv[2]) * atoi(argv[3]));
    }
    else if(strcmp(argv[1], "divide") == 0){
        if(atoi(argv[3]) == 0){
            printf("Error: Division by zero.\n");
            exit(1);
        }
        printf("Result: %d\n", atoi(argv[2]) / atoi(argv[3]));
    }
    else{
        printf("Unknown operation: %s\n", argv[1]);
        exit(1);
    }
    return 0;
}