#include <stdio.h>
int main()
{
    int n, i, a[100], sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum=%d\nAverage=%.2f", sum, (float)sum / n);
    return 0;
}
