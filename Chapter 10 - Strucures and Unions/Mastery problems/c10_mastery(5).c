/*
array of  structure to store 10 employees name ,telephone number,hourly wage ,hours worked .
And save it to disk file

*/


#include <stdio.h> 


struct employee {
    char name[50];
    char phone[20];
    float hours_worked;
    double hourly_wage;
};



struct employee all_employees[10];


int main() {

    int i; 
    FILE *my_file_pointer; 
    double total_pay; 

    printf("--- Reading Employee Data from EMP file ---\n");

    my_file_pointer = fopen("EMP", "rb");

   
    if (my_file_pointer == NULL) {
        printf("ERROR! Could not open the file!\n");
        printf("Did you run the other program (Exercise 4) first?\n");
    } else {
        
        
        fread(all_employees, sizeof(struct employee), 10, my_file_pointer);

        
        fclose(my_file_pointer);

        printf("\n--- Here is the data ---\n");

        
        for (i = 0; i < 10; i++) {
            printf("\n--- Employee %d ---\n", i + 1);
            printf("Name: %s\n", all_employees[i].name);
            printf("Phone: %s\n", all_employees[i].phone);
            printf("Hours Worked: %f\n", all_employees[i].hours_worked);
            printf("Hourly Wage: %lf\n", all_employees[i].hourly_wage);
            
            
            total_pay = all_employees[i].hours_worked * all_employees[i].hourly_wage;
            printf("Total Pay: %lf\n", total_pay);
        }
    }

    return 0;
}