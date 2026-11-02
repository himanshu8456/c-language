#include <stdio.h>
int factorial(int num)
{
    if (num == 0)
    {
        printf("factorial of %d is 1", num);
    }
    else
    {
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("factorial of %d is %d", num, fact);
    }
    return 0;
}
int main()
{
    int num;
    printf("enter number:");
    scanf("%d", &num);
    factorial(num);
    return 0;
}