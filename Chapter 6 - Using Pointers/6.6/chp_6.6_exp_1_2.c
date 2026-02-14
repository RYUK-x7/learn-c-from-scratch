#include <stdio.h>

int main() {
	
// Example 1
	float *fp, **mfp, val;
	fp = &val;
	mfp = &fp;
	
	**mfp = 123.903;
	printf("%f %f", val, **mfp);



	// Example 2
	    char str[100];
            char *ptr;
	    char **pptr;

	    ptr = str;
	    pptr = &ptr;

	    printf("Enter a string: ");
	    gets(*pptr);

	    printf("You entered: %s\n", *pptr);

	    return 0;
	}
