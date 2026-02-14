#include <stdio.h> 
struct s_type { 
int i; 
double d; 
};

struct s_type f(void); 

int main(void) 
{ 
struct s_type varl; 

varl=f(); 
printf("%d %f", varl.i, varl.d);
return 0; 
}

struct s_type f(void) { 
struct s_type temp; 
temp.i=100; 
temp.d=123.23; 
return temp;
}