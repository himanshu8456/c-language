#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    int sum[3] = {0};
    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[j] += arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("Sum of elements in column %d: %d\n", i + 1, sum[i]);
    }
    return 0;
}
