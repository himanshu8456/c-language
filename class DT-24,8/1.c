#include <stdio.h>

int main()
{
    printf("Enter two numbers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("The sum  is %d\n", num1 + num2);
    printf("The difference is %d\n", num1 - num2);
    printf("The product is %d\n", num1 * num2);
    printf("The quotient is %d\n", (num2 != 0) ? (num1 / num2) : 0);
    printf("The remainder is %d\n", num1 % num2);
    return 0;
}