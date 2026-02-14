#include <stdio.h>
#include <string.h>

#define MAX 100  /* Maximum number of entries */

struct directory {
    char name[40];
    int area_code;
    char phone[15];
};

int main(void) {
    struct directory list[MAX];
    int count = 0;
    int choice, i, found;
    char search[40];
    FILE *fp;

    do {
        printf("\nTelephone Directory\n");
        printf("1. Enter names, area codes, and numbers\n");
        printf("2. Find a number\n");
        printf("3. Save directory to disk\n");
        printf("4. Load directory from disk\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  /* clear newline */

        switch(choice) {
            case 1: {
                int n;
                printf("How many entries do you want to add? ");
                scanf("%d", &n);
                getchar(); /* clear newline */

                for(i = count; i < count + n && i < MAX; i++) {
                    printf("\nEnter name: ");
                    gets(list[i].name);
                    printf("Enter area code: ");
                    scanf("%d", &list[i].area_code);
                    getchar(); /* clear newline */
                    printf("Enter phone number: ");
                    gets(list[i].phone);
                }
                count += n;
                break;
            }

            case 2:
                printf("\nEnter name to search: ");
                gets(search);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(strcmp(search, list[i].name) == 0) {
                        printf("\nRecord Found:\n");
                        printf("Name: %s\n", list[i].name);
                        printf("Area Code: %d\n", list[i].area_code);
                        printf("Phone Number: %s\n", list[i].phone);
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    printf("\nName not found.\n");
                break;

            case 3:
                fp = fopen("directory.txt", "w");
                if(fp == NULL) {
                    printf("Error opening file for writing.\n");
                    break;
                }
                fprintf(fp, "%d\n", count);
                for(i = 0; i < count; i++) {
                    fprintf(fp, "%s %d %s\n", list[i].name, list[i].area_code, list[i].phone);
                }
                fclose(fp);
                printf("\nDirectory saved to disk.\n");
                break;

            case 4:
                fp = fopen("directory.txt", "r");
                if(fp == NULL) {
                    printf("No saved file found.\n");
                    break;
                }
                fscanf(fp, "%d\n", &count);
                for(i = 0; i < count; i++) {
                    fscanf(fp, "%s %d %s\n", list[i].name, &list[i].area_code, list[i].phone);
                }
                fclose(fp);
                printf("\nDirectory loaded from disk.\n");
                break;

            case 5:
                printf("\nExiting program.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}