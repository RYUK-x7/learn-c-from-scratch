// division avoiding invalid cases

#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter the first number:");
    scanf("%d", &n1);
    printf("Enter the second number:");
    scanf("%d", &n2);

    if(n2 == 0) printf("Invalid");
    else printf("Answer is %d\n", n1/n2);
    return 0;
}