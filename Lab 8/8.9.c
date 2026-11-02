#include <stdio.h>

int main()
{
    char text[100];
    int index;

    printf("Input the string: ");
    scanf("%99[^\n]", text);

    printf("The given sentence is: %s\n", text);
    for (index = 0; text[index] != '\0'; index++)
    {
        if (text[index] >= 'a' && text[index] <= 'z')
        {
            text[index] = text[index] - 32;
        }
        else if (text[index] >= 'A' && text[index] <= 'Z')
        {
            text[index] = text[index] + 32;
        }
    }

    printf("After case changed the string is: %s\n", text);
    return 0;
}
