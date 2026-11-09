#include <stdio.h>
int leap_year(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("enter a year:");
    scanf("%d", &n);
    if (leap_year(n))
    {
        printf("%d is a leap year.\n", n);
    }
    else
    {
        printf("%d is not a leap year.\n", n);
    }
    return 0;
}