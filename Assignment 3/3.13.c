#include <stdio.h>
int main()
{
    int a[10][10], n, i, j, sum = 0;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    if (n < 1 || n > 10)
        return 0;
    printf("Enter matrix elements: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Diagonal elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\nSum=%d", sum);
    return 0;
}
