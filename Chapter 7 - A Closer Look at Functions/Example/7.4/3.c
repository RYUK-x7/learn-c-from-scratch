#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double pounds;
    if(argc != 2){
        printf("Usage: CONVERT <ounces>\n");
        printf("Try again.\n");
        // professional practice to return non-zero value on error
    }

    else{
        pounds = atof(argv[1]) / 16.0;
        printf("%lf pounds\n", pounds);
    }
    return 0;

}