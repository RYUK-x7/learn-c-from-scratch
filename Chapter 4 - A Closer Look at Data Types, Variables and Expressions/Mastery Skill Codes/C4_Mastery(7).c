#include <stdio.h>
int num = 21;
void series() {
    num = (num * 1468) % 467;
    printf("%d\n", num);
}
int main() {
    printf("Starting number: 21\n\n");
    printf("The series is:\n");
    for (int i = 0; i < 10; i++) {
        series();
    }
    return 0;
}
