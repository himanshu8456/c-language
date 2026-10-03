#include <stdio.h>

int main()
{
    printf("enter the mark of first subject:");
    float mark1;
    scanf("%f", &mark1);
    printf("enter the mark of second subject:");
    float mark2;
    scanf("%f", &mark2);
    printf("enter the mark of third subject:");
    float mark3;
    scanf("%f", &mark3);
    printf("enter the mark of fourth subject:");
    float mark4;
    scanf("%f", &mark4);
    printf("enter the mark of fifth subject:");
    float mark5;
    scanf("%f", &mark5);
    float total_marks = mark1 + mark2 + mark3 + mark4 + mark5;
    float average_marks = total_marks / 5;
    float percentage = (total_marks / 500) * 100;
    printf("the total marks is: %f\n", total_marks);
    printf("the average marks is: %f\n", average_marks);
    printf("the percentage is: %f%%\n", percentage);
    return 0;
}