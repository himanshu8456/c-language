#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    int largest;
    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    largest = arr[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    printf("The largest element in the 2D array is: %d\n", largest);
    return 0;
}