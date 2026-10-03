#include <stdio.h>
int main()
{
    int year;
    printf("enter the year to find if it is leap year or not:");
    scanf("%d", &year);
    printf("the year is %s\n", (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? "a leap year" : "not a leap year");
    return 0;
}