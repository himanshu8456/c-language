#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5][5], b[5][5], c[5][5], m, n, p, q, i, j, k;
    printf("enter the size of m and n for first matrix a:");
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the element a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix a is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("enter the size of p and q for second matrix b:");
    scanf("%d%d", &p, &q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("enter the element b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("the matrix b is:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (n == p)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < m; k++)
                {
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
        printf("after multiplicatiion the resultant matrix is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix multiplication is not possible");
    }
}