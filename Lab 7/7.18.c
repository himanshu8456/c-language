#include <stdio.h>
int find_HCF(int n, int m)
{
    int n1 = n, n2 = m;
    int rem;
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    printf("HCF of %d and %d is %d\n", n, m, n1);
}
int main()
{
    int n, m;
    printf("enter two numbers:");
    scanf("%d %d", &n, &m);
    find_HCF(n, m);
    return 0;
}