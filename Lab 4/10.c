#include <stdio.h>
int main()
{
    int n, original, digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    if (sum == original)
    {
        printf("%d is a armstrong number.", original);
    }
    else
    {
        printf("%d is not a armstrong number.", original);
    }
    return 0;
}