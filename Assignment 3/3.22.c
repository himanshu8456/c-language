#include <stdio.h>
int main()
{
    int a[100], n, i, j, t, count, best = 0, mode = 0;
    double sum = 0, median;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("Invalid n");
        return 0;
    }
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    if (n % 2)
        median = a[n / 2];
    else
        median = ((double)a[n / 2 - 1] + a[n / 2]) / 2;
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
            if (a[i] == a[j])
                count++;
        if (count > best)
        {
            best = count;
            mode = a[i];
        }
    }
    printf("Mean=%.2f\nMedian=%.2f\n", sum / n, median);
    if (best == 1)
        printf("No mode");
    else
        printf("Mode=%d", mode);
    return 0;
}
