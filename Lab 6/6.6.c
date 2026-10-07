#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    int positive = 0, negative = 0, zero = 0;
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
            if (arr[i][j] > 0)
            {
                positive++;
            }
            else if (arr[i][j] < 0)
            {
                negative++;
            }
            else
            {
                zero++;
            }
        }
    }
    printf("Number of positive elements: %d\n", positive);
    printf("Number of negative elements: %d\n", negative);
    printf("Number of zero elements: %d\n", zero);
    return 0;
}
