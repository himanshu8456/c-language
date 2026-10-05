#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    int smallest;
    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    smallest = arr[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }
    printf("The smallest element in the 2D array is: %d\n", smallest);
    return 0;
}