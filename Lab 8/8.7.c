#include <stdio.h>

int main()
{
    char text[100];
    char substring[100];
    int position;
    int length;
    int text_length;
    int index;

    printf("Input the string: ");
    scanf("%99[^\n]", text);

    printf("Input the position to start extraction: ");
    scanf("%d", &position);
    printf("Input the length of substring: ");
    scanf("%d", &length);

    for (text_length = 0; text[text_length] != '\0'; text_length++)
    {
    }

    if (position < 1 || position > text_length + 1 || length < 0)
    {
        printf("Invalid position or substring length.\n");
        return 0;
    }

    for (index = 0; index < length && position - 1 + index < text_length && index < 99; index++)
    {
        substring[index] = text[position - 1 + index];
    }
    substring[index] = '\0';

    printf("The substring retrieved from the string is: \"%s\"\n", substring);
    return 0;
}
