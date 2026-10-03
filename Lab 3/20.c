#include <stdio.h>
int main()
{
    int age;
    float income;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your monthly income: ");
    scanf("%f", &income);
    if (age >= 21)
    {
        if (income >= 25000)
        {
            printf("Customer is eligible for the loan.");
        }
        else
        {
            printf("Customer is not eligible: Income is below ₹25,000.");
        }
    }
    else
    {
        printf("Customer is not eligible: Age is below 21.");
    }
    return 0;
}