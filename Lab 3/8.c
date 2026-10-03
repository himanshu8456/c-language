#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter the first number:");
    scanf("%d", &num1);
    printf("enter the second number:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("the first number is larger.");
    }
    else
    {
        printf("the second number is larger.");
    }
}