#include <stdio.h>
int main()
{
    int palindrome, remainder, original;
    int reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &palindrome);
    original = palindrome;
    while (palindrome != 0)
    {
        remainder = palindrome % 10;
        reversed = reversed * 10 + remainder;
        palindrome = palindrome / 10;
    }
    if (original == reversed)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;
}