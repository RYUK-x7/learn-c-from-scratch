#include <stdio.h>
// Review Skills Check Chapter 7 
/* Theoretical questions
    1 -> Better memory & time efficiency & easier pointer-to-pointer and dynamic structures & easier slicing data structures
*/
    
    // 2->  Counting spaces using pointers 
int space_count(char *s){
    int spaces = 0;
    while (*s){
        if (*s == ' '){
            spaces++;
        }
        ++s;
    }
    return spaces;
}
    
int main() {
    // 2->  Counting spaces using pointers
    char a[7]= "k   a  ";
    int k= space_count(a);
    printf("%d", k); // 5
    
    //  3 -> Rewrite the following array reference using pointer arithmetic.
    int count[100][10];
    count[44][8]= 99;
    // Solution:
    *((*(count + 44)) + 8) = 819;
    printf("\n%d", count[44][8]); // 819
    
    return 0;
}
