#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to check either the number divisible by 3 or 5: : ");
    scanf("%d", &num);
    printf("The number is %s\n", (num % 3 == 0) ? "divisible by 3" : (num % 5 == 0) ? "divisible by 5"
                                                                                    : "not divisible by 3 or 5");
    return 0;
}