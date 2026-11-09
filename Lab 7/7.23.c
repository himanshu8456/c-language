#include <stdio.h>
int sum_of_elements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = sum_of_elements(arr, n);
    printf("sum of elements: %d\n", sum);
    return 0;
}