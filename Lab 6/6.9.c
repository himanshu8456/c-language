#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
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
            if (i == j)
            {
                printf("Element at position (%d, %d): %d\n", i, j, arr[i][j]);
            }
        }
    }
    return 0;
}
