#include <stdio.h>
int checkpalindrome(int n)
{
    int original = n;
    int reverse = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    if (original == reverse)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    checkpalindrome(n);
    return 0;
}