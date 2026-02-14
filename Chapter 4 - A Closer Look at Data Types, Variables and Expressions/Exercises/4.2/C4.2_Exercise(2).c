#include <stdio.h>

float soundspeed(float x);

int main(void){
    float dist;
    printf("Enter the distance in feet: ");
    scanf("%f", &dist);

    printf("Time needed to travel = %f seconds", soundspeed(dist));

    return 0;
}

float soundspeed(float x){
    float result = x / 1129;

    return result;
}


/*This is a non general function:
#include <stdio.h>

float soundspeed();

int main(void){
    float time = soundspeed();

    printf("Time needed to travel = %f seconds\n", time);
}

float soundspeed(){
    float dist = 4326454.54;
    float speed = 1129;
    float result = dist / speed;

    return result;
}
*/