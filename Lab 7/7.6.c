#include <stdio.h>
int cubeofgivennumber()
{
    int i;
    printf("enter a number:");
    scanf("%d", &i);
    printf("cube of %d is %d", i, i * i * i);
    return 0;
}
int main()
{
    cubeofgivennumber();
    return 0;
}