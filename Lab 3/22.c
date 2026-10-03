#include <stdio.h>
int main()
{
    int m1, m2, m3, total;
    float percentage;
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = total / 3.0;
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
    {
        printf("Result: PASS\n");
        printf("Total Marks: %d\n", total);
        if (percentage >= 75)
            printf("Grade: A");
        else if (percentage >= 60)
            printf("Grade: B");
        else if (percentage >= 50)
            printf("Grade: C");
        else
            printf("Grade: D");
    }
    else
    {
        printf("Result: FAIL\n");
        printf("Total Marks: %d", total);
    }
    return 0;
}