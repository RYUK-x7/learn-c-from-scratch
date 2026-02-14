/*An electronic card catalog*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int menu (void);
void display(int i);
void author_search(void);
void title_search (void);
void enter (void);
void save (void);
void load (void);

struct catalog {
    char name[80]; /* author name */
    char title[80]; /*title*/
    char pub [80]; /* publisher */
    unsigned date; /* edition */
    unsigned char ed;  /* copyright date */
} cat [MAX];

int top =0;  /*last location used */

int main(void)
{
    int choice;
    load();/* read in catalog */

    do {
        choice = menu();
        switch(choice) {
        case 1:
            enter(); /* enter books */
            break;
        case 2:
            author_search(); /* search by author */
            break;
        case 3:
            title_search(); /* search by title */ break;
        case 4:
            save();
        }

    } while(choice!=5);
    return 0;
}
/* Return a menu selection */

menu (void) {
    int i;
    char str[80];

    printf("Card catalog:\n");
    printf(" 1. Enter\n");
    printf(" 2. Search by Author\n");
    printf(" 3. Search by Title\n");
    printf(" 4. Save catalog\n");
    printf(" 5. Quit\n");

    do {
        printf("Choose your selection: ");
        gets(str);
        i=atoi(str);
        printf("\n");
    } while(i<1 || 1>5);

    return i;
}
/* Enter books into database. */

void enter (void) {
    int i;
    char temp [80];
    for(i=top; i<MAX; i++) {
        printf("Enter author name (ENTER to quit): ");
        gets (cat[i].name);
        if(!cat[i].name) break;
        printf("Enter title: ");
        gets(cat[i].title);
        printf("Enter publisher: ");
        gets(cat[i].pub);
        printf("Enter copyright date: ");
        gets (temp);
        cat[i].date= (unsigned) atoi(temp);
        printf("Enter edition: ");
        gets (temp);
        cat[i].ed= (unsigned char) atoi(temp);
    }
    top = i;
}

/* Search by author*/
void author_search (void) {
    char name [80];
    int i, found;

    printf("Name: ");
    gets (name);

    found = 0;
    for(i=0; i<top; i++)
        if(!strcmp(name, cat[i].name)) {
            display(i);
            found = 1;
            printf("\n");
        }
    if(!found) printf("Not Found\n");
}
/*Search by title. */
void title_search (void)
{
    char title[80];
    int i, found;

    printf("Title: ");
    gets (title);

    found = 0;
    for(i=0; i<top; i++)
        if(!strcmp(title, cat[i].title)) {
            display(i);
            found = 1;
            printf("\n");
        }
    if(!found) printf("Not Found\n");
}

/* Display catalog entry. */
void display(int i)
{
    printf("%s\n", cat[i].title);
    printf("by %s\n", cat[i].name);
    printf("Published by %s\n", cat[i].pub);
    printf("Copyright: Bu, Bu edition\n", cat [i].date, cat[i].ed);
}
 /* Load the catalog file. */
void load(void) {
    FILE *fp;
    int i;
    if((fp = fopen("catalog", "rb"))==NULL) {
        printf("Catalog file not on disk.\n");
        return;
    }
    if (fread(&top, sizeof top, 1, fp) != 1) { /*read count */
        printf("Error reading count.\n");
        exit(1);
    }
    for(i=0; i<=top; i++) /* read data */
        if (fread(&cat[i], sizeof(struct catalog), 1, fp) != 1) {
            printf("Error reading catalog data.\n");
            exit(1);
        }
    fclose(fp);
}

/* Save the catalog file. */
void save (void) {
    FILE *fp;
    int i;
    if((fp = fopen("catalog", "wb"))==NULL) {
        printf("Cannot open catalog file.\n");
        exit(1);
    }
    if (fwrite(&top, sizeof top, 1, fp) != 1) { /* write count */
        printf("Error writing count.\n");
        exit(1);
    }
    for(i=0; i<=top; i++) /* write data */
        if(fwrite(&cat[i], sizeof(struct catalog), 1, fp)!= 1) {
            printf("Error writing catalog data.\n");
            exit(1);
        }
    fclose(fp);
}

    