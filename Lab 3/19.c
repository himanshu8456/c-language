#include <stdio.h>
int main()
{
    int marks1, marks2, marks3, total;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    total = marks1 + marks2 + marks3;
    if (marks1 >= 40 && marks2 >= 40 && marks3 >= 40)
    {
        printf("Student has passed all subjects.\n");
        if (total >= 180)
        {
            printf("Student is eligible for admission.");
        }
        else
        {
            printf("Student is not eligible for admission.");
        }
    }
    else
    {
        printf("Student has failed in one or more subjects.\n");
        printf("Student is not eligible for admission.");
    }
    return 0;
}