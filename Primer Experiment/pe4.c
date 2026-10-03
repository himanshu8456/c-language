#include <stdio.h>
int main()
{
    printf("enter  the radius of the circle:");
    float radius;
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    printf("the area of the circle is: %.2f\n", area);
    return 0;
}