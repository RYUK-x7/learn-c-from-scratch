/*
array of  structure to store 10 employees name ,telephone number,hourly wage ,hours worked .
and save it to disk file
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
    FILE *fp;

    printf("--- Enter 10 Employee Details ---\n");

    for(i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", all_employees[i].name);

        printf("Phone: ");
        scanf("%s", all_employees[i].phone);

        printf("Hours worked: ");
        scanf("%f", &all_employees[i].hours_worked);

        printf("Hourly wage: ");
        scanf("%lf", &all_employees[i].hourly_wage);
    }

    fp = fopen("emp.dat", "wb");
    
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(all_employees, sizeof(struct employee), 10, fp);
    fclose(fp);

    printf("\nData saved to file successfully!\n");

    return 0;
}