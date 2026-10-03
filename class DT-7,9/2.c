#include <stdio.h>
void main()
{
    int x = 5, y;
    y = x++;
    y += ++x;
    y -= x--;
    y += --x;
    printf("%d%d", x, y);
}