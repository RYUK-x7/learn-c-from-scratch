// printing decreasing sequence

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        printf("%d", i);
        printf("\n");
    }
}