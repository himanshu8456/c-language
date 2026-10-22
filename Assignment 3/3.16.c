#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, max, row = 0, col = 0;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    if (r < 1 || r > 10 || c < 1 || c > 10)
        return 0;
    printf("Enter matrix elements: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    max = a[0][0];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                col = j;
            }
    printf("Largest=%d\nRow=%d\nColumn=%d", max, row + 1, col + 1);
    return 0;
}
