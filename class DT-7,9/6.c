#include <stdio.h>
void main()
{
    int a = 4, b = 3, c;
    c = (++a && ++b) || (b++ > 5);
    printf("%d%d%d", a, b, c);
}