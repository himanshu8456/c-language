#include <stdio.h>
int main()
{
    printf("enter the principal amount:");
    float principal;
    scanf("%f", &principal);
    printf("enter the rate of interest:");
    float rate;
    scanf("%f", &rate);
    printf("enter the time period:");
    float time;
    scanf("%f", &time);
    float simple_interest = (principal * rate * time) / 100;
    printf("the simple interest is: %.2f\n", simple_interest);
    return 0;
}