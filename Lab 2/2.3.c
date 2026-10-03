#include <stdio.h>

int main()
{
    float radius, area;
    const float pi = 3.14159;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);
    area = radius;
    area *= radius;
    area *= pi;
    printf("the area of the circle is: %f\n", area);
    return 0;
}