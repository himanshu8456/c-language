#include <stdio.h>
#include <limits.h>
int main()
{
    int a[100], n, i, largest = INT_MIN, second = INT_MIN;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
            second = a[i];
    }
    if (second == INT_MIN)
        printf("Second largest element does not exist");
    else
        printf("Second largest element = %d", second);
    return 0;
}
