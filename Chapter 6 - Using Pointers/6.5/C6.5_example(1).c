#include<stdio.h>
char *p[]={
    "input exceeds field width",
    "out of range",
    "printer not turned on",
    "paper out",
    "Disk full",
    "Disk write error"

};
void error(int err_name) {
    printf(p[err_name]);
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n>5) {
        return 0;
    }else {
        error(n);
    }
}