#include <stdio.h>
int main()
{
    printf("enter the first number:");
    int num1;
    scanf("%d", &num1);
    printf("enter the second number:");
    int num2;
    scanf("%d", &num2);
    printf("enter the third number:");
    int num3;
    scanf("%d", &num3);
    int sum = num1 + num2 + num3;
    printf("the sum of the three numbers is: %d\n", sum);
    float average = (float)sum / 3;
    printf("the average of the three numbers is: %.2f\n", average);
    return 0;
}