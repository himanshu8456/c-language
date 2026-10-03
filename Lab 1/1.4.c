#include <stdio.h>

int main()
{
    printf("enter the first number for swapping: ");
    float num1;
    scanf("%f", &num1);
    printf("enter the second number for swapping: ");
    float num2;
    scanf("%f", &num2);
    float temp = num1;
    num1 = num2;
    num2 = temp;
    printf("after swapping, the first number is: %f\n", num1);
    printf("after swapping, the second number is: %f\n", num2);
    return 0;
}