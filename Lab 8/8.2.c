#include <stdio.h>

int main()
{
    char text[100];
    char target;
    int index;
    int new_index = 0;

    printf("Input the string: ");
    scanf("%99[^\n]", text);
    printf("Character to remove: ");
    scanf(" %c", &target);

    for (index = 0; text[index] != '\0'; index++)
    {
        if (text[index] != target)
        {
            text[new_index] = text[index];
            new_index++;
        }
    }
    text[new_index] = '\0';

    printf("String after removing '%c': %s\n", target, text);
    return 0;
}
