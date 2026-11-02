#include <stdio.h>

int main()
{
    char text[100];
    int index;
    int new_index = 0;

    printf("Input the sentence: ");
    scanf("%99[^\n]", text);

    for (index = 0; text[index] != '\0'; index++)
    {
        if (text[index] != ' ')
        {
            text[new_index] = text[index];
            new_index++;
        }
    }
    text[new_index] = '\0';

    printf("Sentence without spaces: %s\n", text);
    return 0;
}
