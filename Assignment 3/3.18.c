#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, z = 0;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    if (r < 1 || r > 10 || c < 1 || c > 10)
        return 0;
    printf("Enter matrix elements: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                z++;
        }
    if (z > r * c / 2)
        printf("Sparse matrix");
    else
        printf("Not a sparse matrix");
    return 0;
}
