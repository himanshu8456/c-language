#include <stdio.h>
void main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("entered number is divisible by 5.");
    }
}