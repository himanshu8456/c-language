#include <stdio.h>
int main()
{
    int n, i, a[100], t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
