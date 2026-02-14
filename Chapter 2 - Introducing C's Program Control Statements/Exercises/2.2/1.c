// sum or product

#include<stdio.h>

int main(){
    int n1,n2,c;
    printf("Enter the first number:");
    scanf("%d", &n1);
    printf("Enter the second number:");
    scanf("%d", &n2);
    printf("Enter 1 for sum and 0 for product:");
    scanf("%d", &c);
    if(c == 0) printf("Product is: %d\n", n1*n2);
    else if(c == 1) printf("Sum is : %d\n", n1+n2);
    else printf("Invalid choice");
}