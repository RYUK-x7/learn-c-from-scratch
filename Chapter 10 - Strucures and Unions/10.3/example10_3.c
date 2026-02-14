
// An electronic card catalog

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int menu(void);
void display(int i);
void author_search(void);
void title_search(void);
void enter(void);
void save(void);
void load(void);

struct book_type
{
  unsigned date;
  unsigned char ed;
  unsigned char pages;
};

struct catalog
{
  char name[80];
  char title[80];
  char pub[80];
  struct book_type book;
} cat[MAX];

int top = 0;

int main(void)
{
  int choice;

  load();

  do
  {
    choice = menu();
    switch (choice)
    {
    case 1:
      enter();
      break;
    case 2:
      author_search();
      break;
    case 3:
      title_search();
      break;
    case 4:
      save();
      break;
    }
  } while (choice != 5);

  return 0;
}

int menu(void)
{
  int i;
  char str[80];

  printf("Card Catalog:\n");
  printf(" 1. Enter\n");
  printf(" 2. Search by Author\n");
  printf(" 3. Search by Title\n");
  printf(" 4. Save catalog\n");
  printf(" 5. Quit\n");

  do
  {
    printf("Choose your selection: ");
    gets(str);
    i = atoi(str);
  } while (i < 1 || i > 5);

  return i;
}

void enter(void)
{
  int i;
  char temp[80];

  for (i = top; i < MAX; i++)
  {
    printf("Enter author name (ENTER to quit): ");
    gets(cat[i].name);
    if (!*cat[i].name)
      break;
    printf("Enter title: ");
    gets(cat[i].title);
    printf("Enter publisher: ");
    gets(cat[i].pub);
    printf("Enter copyright date: ");
    gets(temp);
    cat[i].book.date = (unsigned)atoi(temp);
    printf("Enter edition: ");
    gets(temp);
    cat[i].book.ed = (unsigned char)atoi(temp);
    printf("Enter number of pages: ");
    gets(temp);
    cat[i].book.pages = (unsigned char)atoi(temp);
  }
  top = i;
}

void author_search(void)
{
  char name[80];
  int i, found;

  printf("Name: ");
  gets(name);

  found = 0;
  for (i = 0; i < top; i++)
    if (!stricmp(name, cat[i].name))
    {
      display(i);
      found = 1;
      printf("\n");
    }
  if (!found)
    printf("Not Found\n");
}

void title_search(void)
{
  char title[80];
  int i, found;

  printf("Title: ");
  gets(title);

  found = 0;
  for (i = 0; i < top; i++)
    if (!stricmp(title, cat[i].title))
    {
      display(i);
      found = 1;
      printf("\n");
    }
  if (!found)
    printf("Not Found\n");
}

void display(int i)
{
  printf("%s\n", cat[i].title);
  printf("by %s\n", cat[i].name);
  printf("Published by %s\n", cat[i].pub);
  printf("Copyright: %u, edition: %u\n", cat[i].book.date, cat[i].book.ed);
  printf("Pages: %u\n", cat[i].book.pages);
}

void load(void)
{
  FILE *fp;

  if ((fp = fopen("catalog", "rb")) == NULL)
  {
    printf("Catalog file not on disk.\n");
    return;
  }

  if (fread(&top, sizeof top, 1, fp) != 1)
  {
    printf("Error reading count.\n");
    exit(1);
  }

  if (fread(cat, sizeof cat, 1, fp) != 1)
  {
    printf("Error reading catalog data.\n");
    exit(1);
  }

  fclose(fp);
}

void save(void)
{
  FILE *fp;

  if ((fp = fopen("catalog", "wb")) == NULL)
  {
    printf("Cannot open catalog file.\n");
    exit(1);
  }

  if (fwrite(&top, sizeof top, 1, fp) != 1)
  {
    printf("Error writing count.\n");
    exit(1);
  }

  if (fwrite(cat, sizeof cat, 1, fp) != 1)
  {
    printf("Error writing catalog data.\n");
    exit(1);
  }

  fclose(fp);
}
