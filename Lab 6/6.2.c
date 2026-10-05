#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    int sum = 0;
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
            sum += arr[i][j];
        }
    }
    printf("The sum off all element of the 2D array is: %d\n", sum);
    return 0;
}