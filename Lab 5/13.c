#include <stdio.h>
#include <limits.h>
int main()
{
    int a[100], n, i, smallest = INT_MAX, second = INT_MAX;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            second = smallest;
            smallest = a[i];
        }
        else if (a[i] < second && a[i] != smallest)
            second = a[i];
    }
    if (second == INT_MAX)
        printf("Second smallest element does not exist");
    else
        printf("Second smallest element = %d", second);
    return 0;
}
