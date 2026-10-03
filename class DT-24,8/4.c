#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check if it is between 20 to 50 and even: ");
    scanf("%d", &num);
    printf("The number is %s\n", (num >= 20 && num <= 50 && num % 2 == 0) ? "between 20 and 50 and is even" : "not between 20 and 50 or not even");
    return 0;
}