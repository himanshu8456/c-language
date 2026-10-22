#include <stdio.h>
int main()
{
    int a[100], n, i, j, count, max = 0, num = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
            if (a[i] == a[j])
                count++;
        if (count > max)
        {
            max = count;
            num = a[i];
        }
    }
    printf("Number=%d\nFrequency=%d", num, max);
    return 0;
}
