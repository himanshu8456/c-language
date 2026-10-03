#include <stdio.h>
void main()
{
    int x = 30;
    {
        int x = 20;
        printf("%d\n", x);
    }
    printf("%d", x);
}