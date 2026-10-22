#include <stdio.h>
int main()
{
    int n, i, a[100], key, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the value to find frequency: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key)
            count++;
    printf("Frequency=%d", count);
    return 0;
}
