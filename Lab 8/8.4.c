#include <stdio.h>

int main()
{
    char text[100];
    int index;

    printf("Input an uppercase string: ");
    scanf("%99[^\n]", text);

    for (index = 0; text[index] != '\0'; index++)
    {
        if (text[index] >= 'A' && text[index] <= 'Z')
        {
            text[index] = text[index] + 32;
        }
    }

    printf("Lowercase string: %s\n", text);
    return 0;
}
