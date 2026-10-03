#include <stdio.h>
int main()
{
    printf("enter  a number:");
    int num1;
    scanf("%d", &num1);
    printf("enter another number:");
    int num2;
    scanf("%d", &num2);
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / num2;
    printf("sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product: %d\n", product);
    printf("quotient: %.2f\n", quotient);
    return 0;
}