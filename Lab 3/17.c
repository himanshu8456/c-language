#include <stdio.h>
int main()
{
    int age;
    char citizen;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizen);
    if (age >= 18)
    {
        if (citizen == 'Y' || citizen == 'y')
        {
            printf("Person is eligible to vote.");
        }
        else
        {
            printf("Person is not eligible to vote.");
        }
    }
    else
    {
        printf("Person is not eligible to vote.");
    }
    return 0;
}