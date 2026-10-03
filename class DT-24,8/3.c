#include <stdio.h>
int main()
{
    int num;
    printf("enter the number to find if it was between 1 to 100:");
    scanf("%d", &num);
    printf("the number is %s\n", (num >= 1 && num <= 100) ? "between 1 to 100" : "not between 1 to 100");
    return 0;
}