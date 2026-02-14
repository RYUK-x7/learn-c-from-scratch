 /* This program computes driving time when
  given the distance and the average speed. */

#include<stdio.h>

int main(){

    int num;
    double dis;
    double ave;
    double time;

printf("Input the number of times you want to compute drive time: ");
scanf("%d", &num);

for(int i=0;i<num;i++){
    printf("Input the average velocity in m/s: ");
    scanf("%lf",&ave);

    printf("Input the distance in meters: ");
    scanf("%lf",&dis);

    time=dis/ave;
    printf("The drive time for this input is: %.2lf second\n", time);


}




return 0;
}




