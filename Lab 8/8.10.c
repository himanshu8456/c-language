#include <stdio.h>

int main()
{
    char text[200];
    int count = 0;
    int index;
    int length;

    printf("Input the string: ");
    scanf("%199[^\n]", text);

    for (length = 0; text[length] != '\0'; length++)
    {
    }

    for (index = 0; index < length - 2; index++)
    {
        if ((text[index] == 't' || text[index] == 'T') &&
            (text[index + 1] == 'h' || text[index + 1] == 'H') &&
            (text[index + 2] == 'e' || text[index + 2] == 'E') &&
            (index == 0 || text[index - 1] == ' ' || text[index - 1] == '.' || text[index - 1] == ',') &&
            (text[index + 3] == '\0' || text[index + 3] == ' ' || text[index + 3] == '.' || text[index + 3] == ','))
        {
            count++;
        }
    }

    printf("The frequency of the word 'the' is: %d\n", count);
    return 0;
}
