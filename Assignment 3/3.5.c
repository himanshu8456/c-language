#include <stdio.h>
int main()
{
    int n, i, j, a[100], t;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    printf("Enter %d marks: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    printf("Marks in ascending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
