#include <stdio.h>
int check_armstrong(int n)
{
    int originalNum, remainder, result = 0;
    originalNum = n;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    return result == n;
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    if (check_armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}