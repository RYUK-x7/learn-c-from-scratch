#include <stdio.h>
// Review Skills Check Chapter 7 
/* Theoretical questions
    1 -> this fragment sets 19 to the memory address of i and sets the 
        memory address of i to pointer p
    2 -> the first element of the array
    3 -> yes, this just means p is a pointer to the address of the first
        element and we can access other elements using p[i]
    6 -> Yes, prints C
        
*/
    
    // 5 -> Write your own version of strlen( ), called mystrlen( ), and
        //  demonstrate it in a program.
int mystrlen(char *s){
        int i = 0;
        while(*(s+i) != '\0'){
            i++;
        }
        return i;
    }
    
int main() {
    // 4 Write a short program that assigns a floating-point value to a
        //    variable indirectly using a pointer to the variable.
    float i, *pI;
    pI = &i;
    *pI = 3.14;
    
    // 5 -> Write your own version of strlen( ), called mystrlen( ), and
        //  demonstrate it in a program.
    char a[7]= "kabbo";
    int k= mystrlen(a);
    printf("%d", k); // 5

    return 0;
}
