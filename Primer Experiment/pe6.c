#include <stdio.h>
int main()
{
    printf("enter the temperature in celsius:");
    float celsius;
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9/5) + 32;
    printf("the temperature in fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}