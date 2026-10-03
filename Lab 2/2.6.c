#include <stdio.h>

int main()
{
    int num, shift;
    printf("enter the number to shift: ");
    scanf("%d", &num);
    printf("enter the position to shift the number: ");
    scanf("%d", &shift);
    printf("the original number is: %d\n", num);
    printf("the number after left shift : %d\n", num << shift);
    printf("the number after right shift : %d\n", num >> shift);
    return 0;
}