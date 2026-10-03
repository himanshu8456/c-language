#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("after swapping the two numbers are:\n");
    printf("first number is:%d\n", num1);
    printf("second number is:%d\n", num2);
    return 0;
}
