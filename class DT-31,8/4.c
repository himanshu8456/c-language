#include <stdio.h>
int armstrong(int n, int original, int sum)
{
    if (n == 0)
    {
        return sum == original;
    }
    int digit = n % 10;
    sum += digit * digit * digit;
    return armstrong(n / 10, original, sum);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num, num, 0))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}