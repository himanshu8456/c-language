#include <stdio.h>
void main()
{
    int a = 5, b = 6, r;
    r = (~a & ~b);
    printf("%d", r);
}