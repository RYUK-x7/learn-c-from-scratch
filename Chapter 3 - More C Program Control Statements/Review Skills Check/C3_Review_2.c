/*  Converting if else into an equivalent switch  */

/*

The if else part: 
if(ch=='L') load();
else if(ch=='s') save();
else if(ch=='e') enter();
else if(ch=='d') display();
else if(ch=='q') quit();

*/



#include<stdio.h>
void load();
void save();
void enter();
void display();
void quit();


int main(){
char ch;
printf("Input your character(l to load, s to save, e to enter, d to display and q to quit): ");
scanf("%c", &ch);

switch (ch)
{
case 'l':
    load();
    break;
case 's':
    save();
    break;
case 'e':
    enter();
    break;
case 'd':
    display();
    break;
case 'q':
    quit();
    break;    
default: printf("Invaid input");
    break;
}





return 0;
}