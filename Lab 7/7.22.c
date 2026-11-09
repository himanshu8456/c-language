#include <stdio.h>
int xtothepowerofn(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * xtothepowerofn(x, n - 1);
}
int main()
{
    int x, n;
    printf("enter a number:");
    scanf("%d", &x);
    printf("enter a power:");
    scanf("%d", &n);
    printf("%d ^ %d is: %d\n", x, n, xtothepowerofn(x, n));
    return 0;
}