#include <stdio.h>
int main()
{
    int a[100], n, i, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("Smallest element = %d", smallest);
    return 0;
}
