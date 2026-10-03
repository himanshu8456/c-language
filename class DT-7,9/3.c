#include <stdio.h>
void main()
{
    int a = 6, b = 9, c;
    c = (++a < b) && (a++ > 3);
    printf("%d%d%d", a, b, c);
}