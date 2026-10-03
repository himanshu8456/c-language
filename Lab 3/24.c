#include <stdio.h>
int main()
{
    int years;
    float salary, bonus;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter years of service: ");
    scanf("%d", &years);
    if (years >= 5)
    {
        if (salary >= 25000)
            bonus = salary * 0.10;
        else
            bonus = salary * 0.05;
    }
    else
    {
        if (salary >= 25000)
            bonus = salary * 0.05;
        else
            bonus = salary * 0.02;
    }
    printf("Salary Bonus = %.2f", bonus);
    return 0;
}