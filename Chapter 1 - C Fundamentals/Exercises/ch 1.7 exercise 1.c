//Example 1
#include<stdio.h>

void func1();
int main(){

    printf("I ");

    func1();

    printf("C.");

return 0;
}

void func1(){
    printf("like ");
    }

//Example 2
#include<stdio.h>

void funcl();
void func2();

int main() {

    func2();
    printf("3");

    return 0;
}

void func1() {
    printf("1 ");
    }
void func2() {

    func1();
    printf("2 ");
    }

