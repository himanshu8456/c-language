#include <stdio.h>

int main()
{
    char text[100];
    int index;

    printf("Input a lowercase string: ");
    scanf("%99[^\n]", text);

    for (index = 0; text[index] != '\0'; index++)
    {
        if (text[index] >= 'a' && text[index] <= 'z')
        {
            text[index] = text[index] - 32;
        }
    }

    printf("Uppercase string: %s\n", text);
    return 0;
}
