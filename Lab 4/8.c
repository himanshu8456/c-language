#include <stdio.h>
int main()
{
    int n, first_digit, last_digit;
    int sum = 0;
    printf("enter a number:");
    scanf("%d", &n);
    last_digit = n % 10;
    while (n >= 10)
    {
        n = n / 10;
        first_digit = n % 10;
    }
    sum = first_digit + last_digit;
    printf("Sum of first and last digit is: %d", sum);
    return 0;
}