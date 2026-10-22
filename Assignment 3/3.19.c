#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter how many Fibonacci numbers: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("Invalid n");
        return 0;
    }
    a[0] = 0;
    if (n > 1)
        a[1] = 1;
    for (i = 2; i < n; i++)
        a[i] = a[i - 1] + a[i - 2];
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
