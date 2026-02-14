/*Using function outnum() which takes inter as argument and display on screen*/

#include <stdio.h>

void outnum(int number);

int main(){
  int input_number;
  
  printf("Please enter an integer: ");
  scanf("%d", &input_number);
  outnum(input_number);
  
  return 0;
}

void outnum(int number){
  printf("The number you entered is: %d\n", number);
}
