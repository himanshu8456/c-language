#include <stdio.h>
void main()
{
    int age;
    printf("enter age of the person:");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("person is eligible for vote.");
    }
    else
    {
        printf("person is not eligible for vote.");
    }
}