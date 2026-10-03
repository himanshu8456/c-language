#include <stdio.h>
int main()
{
    int mark;
    printf("enter the mark of the student:");
    scanf("%d", &mark);
    if (mark > 100 || mark < 0)
    {
        printf("invalid mark.");
    }
    else if (mark >= 90)
    {
        printf("the student grade is 'A'.");
    }
    else if (mark >= 75 && mark < 90)
    {
        printf("the student grade is 'B'.");
    }
    else if (mark >= 60 && mark < 75)
    {
        printf("the student grade is 'C'.");
    }
    else if (mark >= 40 && mark < 60)
    {
        printf("the student grade is 'D'.");
    }
    else
    {
        printf("student is failed.");
    }
    return 0;
}