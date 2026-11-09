#include <stdio.h>
int perfect(int n, int i, int sum)
{
    if (i == n)
    {
        return sum;
    }
    if (n % i == 0)
    {
        sum += i;
    }
    return perfect(n, i + 1, sum);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = perfect(n, 1, 0);
    if (sum == n)
    {
        printf("%d is a perfect number.\n", n);
    }
    else
    {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}