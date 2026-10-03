#include <stdio.h>

int main()
{
    printf("enter two numbers for arithmetic operations:\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
    printf("The difference of %d and %d is %d\n", num1, num2, num1 - num2);
    printf("The product of %d and %d is %d\n", num1, num2, num1 * num2);
    printf("The quotient of %d and %d is %d\n", num1, num2, num1 / num2);
    printf("The remainder of %d and %d is %d\n", num1, num2, num1 % num2);
    return 0;
}