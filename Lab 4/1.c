#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Odd numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}