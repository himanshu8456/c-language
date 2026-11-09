#include <stdio.h>
int multiplication_table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    multiplication_table(n);
    return 0;
}