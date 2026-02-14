#include<stdio.h>

int main(){

    int l,w,h,v;

    printf("Enter the length of the cube: ");
    scanf("%d", &l);

    printf("Enter the width of the cube: ");
    scanf("%d", &w);

    printf("Enter the height of the cube: ");
    scanf("%d", &h);

    v = l*w*h;
    printf("Volume of the cube is: %d", v);

return 0;
}

