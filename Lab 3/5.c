#include <stdio.h>
void main()
{
    char ch;
    printf("enter the character:");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("entered character is uppercase.");
    }
}