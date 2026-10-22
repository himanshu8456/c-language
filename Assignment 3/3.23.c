#include <stdio.h>
int main()
{
    int x[100], y[100], z[200], m, n, i, j, k = 0, found;
    printf("Enter sizes of arrays X and Y: ");
    scanf("%d%d", &m, &n);
    if (m < 1 || m > 100 || n < 1 || n > 100)
        return 0;
    printf("Enter %d elements of X: ", m);
    for (i = 0; i < m; i++)
        scanf("%d", &x[i]);
    printf("Enter %d elements of Y: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &y[i]);
    for (i = 0; i < m; i++)
    {
        found = 0;
        for (j = 0; j < n; j++)
            if (x[i] == y[j])
                found = 1;
        for (j = 0; j < k; j++)
            if (z[j] == x[i])
                found = 0;
        if (found)
            z[k++] = x[i];
    }
    printf("Common elements: ");
    for (i = 0; i < k; i++)
        printf("%d ", z[i]);
    return 0;
}
