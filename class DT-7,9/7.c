#include <stdio.h>
void main()
{
    int a = 3, b = 6, c;
    c = (a-- > 1) || (++b > 5);
    printf("%d%d%d", a, b, c);
}