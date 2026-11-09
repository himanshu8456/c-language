#include <stdio.h>
int find_LCM(int n, int m)
{
    int max;
    max = (n > m) ? n : m;
    while (1)
    {
        if (max % n == 0 && max % m == 0)
        {
            printf("LCM of %d and %d is: %d", n, m, max);
            break;
        }
        ++max;
    }
}
int main()
{
    int n, m;
    printf("enter two numbers:");
    scanf("%d %d", &n, &m);
    find_LCM(n, m);
    return 0;
}