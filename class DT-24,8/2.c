#include <stdio.h>

int main()
{
    int num;
    printf("enter the number to find if the number is even or odd:");
    scanf("%d", &num);
    printf("the number is %s\n", (num % 2 == 0) ? "even" : "odd");
    return 0;
}