#include <stdio.h>
int positiveornegative()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is a positive number", num);
    }
    else if (num < 0)
    {
        printf("%d is a negative number", num);
    }
    else
    {
        printf("%d is equal to zero", num);
    }
    return 0;
}
int main()
{
    positiveornegative();
    return 0;
}