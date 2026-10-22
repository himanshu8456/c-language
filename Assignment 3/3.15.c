#include <stdio.h>
int main()
{
    int q[10][10], r, c, i, j;
    float p[10][10];
    printf("Enter number of stores and products: ");
    scanf("%d%d", &r, &c);
    if (r < 1 || r > 10 || c < 1 || c > 10)
        return 0;
    printf("Enter quantities sold for each store and product: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &q[i][j]);
    printf("Enter corresponding unit prices: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%f", &p[i][j]);
    for (i = 0; i < r; i++)
    {
        float total = 0;
        printf("Store %d revenue: ", i + 1);
        for (j = 0; j < c; j++)
        {
            printf("%.2f ", q[i][j] * p[i][j]);
            total += q[i][j] * p[i][j];
        }
        printf("| Total=%.2f\n", total);
    }
    return 0;
}
