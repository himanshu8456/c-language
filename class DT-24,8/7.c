#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character to find if it is valid or not:");
    scanf("%c", &ch);
    printf("the character is %s\n", (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ? "valid" : "not valid");
    return 0;
}