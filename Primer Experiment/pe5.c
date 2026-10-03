#include <stdio.h>
int main()
{
    printf("enter  the length of the rectangle:");
    float length;
    scanf("%f", &length);
    printf("enter  the width of the rectangle:");
    float width;
    scanf("%f", &width);
    float area = length * width;
    printf("the area of the rectangle is: %.2f\n", area);
    float perimeter = 2 * (length + width);
    printf("the perimeter of the rectangle is: %.2f\n", perimeter);
    return 0;
}