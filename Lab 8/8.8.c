#include <stdio.h>

int main()
{
    char text[100];
    char substring[100];
    int text_length = 0;
    int substring_length = 0;
    int index;
    int match_index;
    int found = 0;

    printf("Input the string: ");
    scanf("%99[^\n]", text);

    printf("Input the substring to search: ");
    scanf(" %99[^\n]", substring);

    for (text_length = 0; text[text_length] != '\0'; text_length++)
    {
    }
    for (substring_length = 0; substring[substring_length] != '\0'; substring_length++)
    {
    }

    for (index = 0; index <= text_length - substring_length; index++)
    {
        for (match_index = 0; substring[match_index] != '\0'; match_index++)
        {
            if (text[index + match_index] != substring[match_index])
            {
                break;
            }
        }
        if (substring[match_index] == '\0')
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("The substring exists in the string.\n");
    }
    else
    {
        printf("The substring does not exist in the string.\n");
    }
    return 0;
}
