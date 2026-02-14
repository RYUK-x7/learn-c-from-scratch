#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("Number of command line arguments: %d\n", argc - 1);
    if (argc > 1)
    {
        printf("The last argument is: %s\n", argv[argc - 1]);

        float ounces = atof(argv[argc - 1]);
        float pounds = ounces / 16.0;

        printf("%.2f ounces = %.2f pounds\n", ounces, pounds);
    }
    else
    {
        printf("No additional arguments were given.\n");
    }

    return 0;
}
