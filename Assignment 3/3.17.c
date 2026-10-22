#include <stdio.h>
int main()
{
    int a[10][10], n, i, j, s = 1;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    if (n < 1 || n > 10)
        return 0;
    printf("Enter matrix elements: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i])
                s = 0;
    if (s)
        printf("Symmetric");
    else
        printf("Not symmetric");
    return 0;
}
