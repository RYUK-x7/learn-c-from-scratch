#include <stdio.h>
#include <time.h>
void print_time(struct tm *time_struct, const char *title);

int main(void)
{
    time_t t;
    struct tm *systime;
    struct tm *utctime;
    t = time(NULL);
    systime = localtime(&t);
    utctime = gmtime(&t);
    print_time(systime, "Local Time");
    printf("\n");
    print_time(utctime, "UTC Time");
    return 0;
}
void print_time(struct tm *time_struct, const char *title)
{
    printf("%s:\n", title);
    printf("Time is %.2d:%.2d:%.2d\n",
           time_struct->tm_hour,
           time_struct->tm_min,
           time_struct->tm_sec);
    printf("Date: %.2d/%.2d/%.2d\n",
           time_struct->tm_mon + 1,
           time_struct->tm_mday,
           time_struct->tm_year % 100);
}