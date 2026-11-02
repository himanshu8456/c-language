#include <stdio.h>
int greaternumber()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest number.", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the greatest number.", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is the greatest number.", c);
    }
    else if (a == b && a > c)
    {
        printf("%d and %d are equal and greater than %d.", a, b, c);
    }
    else if (a == c && a > b)
    {
        printf("%d and %d are equal and greater than %d.", a, c, b);
    }
    else if (b == c && b > a)
    {
        printf("%d and %d are equal and greater than %d.", b, c, a);
    }
    else
    {
        printf("All numbers are equal.");
    }
    return 0;
}
int main()
{
    greaternumber();
    return 0;
}
