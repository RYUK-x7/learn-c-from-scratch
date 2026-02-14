#include<stdio.h>

#define MAX MIN+100
#define MIN

int main()
{
    printf("%d", MAX); 
    return 0;
}
/*this wont work because a macro cannot be defined in terms of
 another before the second macro is defined. */