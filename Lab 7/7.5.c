#include <stdio.h>
int squareofgivennumber()
{
    int i;
    printf("enter a number:");
    scanf("%d", &i);
    printf("square of %d is %d", i, i * i);
    return 0;
}
int main()
{
    squareofgivennumber();
    return 0;
}