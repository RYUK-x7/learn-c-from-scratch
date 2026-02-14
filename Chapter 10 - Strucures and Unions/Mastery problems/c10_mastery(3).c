
/*fixing the code*/

#include<stdio.h>

struct s_type {
        int a ;
    
        char b ;
        float bal ;
    } myvar, *p ;
    
    
    int main(void) {
        p = &myvar ;
        p->a = 10 ;
        return 0 ;
    }