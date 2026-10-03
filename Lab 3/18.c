#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The number is positive.\n");
        if (num % 2 == 0)
        {
            printf("The number is even.");
        }
        else
        {
            printf("The number is odd.");
        }
    }
    else if (num < 0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }
    return 0;
}