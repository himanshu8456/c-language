#include <stdio.h>
int main()
{
    int n, i, a[100], max, second, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 2 || n > 100)
        return 0;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    for (i = 0; i < n; i++)
        if (a[i] < max && (!found || a[i] > second))
        {
            second = a[i];
            found = 1;
        }
    if (found)
        printf("Second largest=%d", second);
    else
        printf("No second largest distinct element");
    return 0;
}
