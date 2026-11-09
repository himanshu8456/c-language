#include <stdio.h>
int largestelementinarray(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = largestelementinarray(arr, n);
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}