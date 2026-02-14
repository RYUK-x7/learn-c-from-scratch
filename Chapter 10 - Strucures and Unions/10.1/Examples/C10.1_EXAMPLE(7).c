#include <stdio.h> 
struct s_type { 
int i; 
double d; 
};

void f(struct s_type temp); 

int main(void) {
struct s_type varl; 
varl.i=99; 
varl.d=98.6; 
f(varl);

return 0;
}

 void f(struct s_type temp) {
 printf("%d %f", temp.i, temp.d);
 }