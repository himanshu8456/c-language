#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    int even = 0, odd = 0;
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
            if (arr[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);
    return 0;
}
