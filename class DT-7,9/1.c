#include <stdio.h>
void main()
{
    int a = 4, b = 3, c;
    c = a++ & ++b;
    printf("%d%d%d", a, b, c);
}