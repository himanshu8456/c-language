#include <stdio.h>
int main()
{
    int a = 3, b = 2, c;
    c = a++ * 2;
    c += ++a * b;
    b++;
    c -= a * b--;
    printf("%d%d%d", a, b, c);
    return 0;
}