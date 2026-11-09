#include <stdio.h>
int countevenoddinarray(int arr[], int size, int *evenCount, int *oddCount)
{
    *evenCount = 0;
    *oddCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}
int main()
{
    int arr[100], size, evenCount, oddCount;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    countevenoddinarray(arr, size, &evenCount, &oddCount);
    printf("Even count: %d\n", evenCount);
    printf("Odd count: %d\n", oddCount);
    return 0;
}