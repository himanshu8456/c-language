#include <stdio.h>
int main()
{
    int n, i, a[100], key, pos = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    printf("Enter %d product IDs: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the product ID to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key)
        {
            pos = i + 1;
            break;
        }
    if (pos != -1)
        printf("Found at position %d", pos);
    else
        printf("Not found");
    return 0;
}
