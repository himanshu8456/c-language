#include <stdio.h>
int main()
{
    int a, b, c, middle;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a < c)
            middle = a;
        else
        {
            if (b > c)
                middle = b;
            else
                middle = c;
        }
    }
    else
    {
        if (a > c)
            middle = a;
        else
        {
            if (b < c)
                middle = b;
            else
                middle = c;
        }
    }
    printf("The middle value is: %d", middle);
    return 0;
}