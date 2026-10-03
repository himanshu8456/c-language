#include <stdio.h>
int main()
{
    int n, fibonacci = 0, first = 0, second = 1, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            fibonacci = i;
        else
        {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
        }
        printf("%d ", fibonacci);
    }
    return 0;
}