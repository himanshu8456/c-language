#include <stdio.h>
int main()
{
    int n, i, a[100], odd = 0, even = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even=%d\nOdd=%d", even, odd);
    return 0;
}
