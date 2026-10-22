#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], m, n, p, q, i, j;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);
    if (m < 1 || m > 10 || n < 1 || n > 10)
        return 0;
    printf("Enter first matrix elements: ");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    if (p < 1 || p > 10 || q < 1 || q > 10)
        return 0;
    printf("Enter second matrix elements: ");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    if (m != p || n != q)
    {
        printf("Cannot add matrices of different dimensions");
        return 0;
    }
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}
