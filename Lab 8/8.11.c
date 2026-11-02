#include <stdio.h>

int main()
{
    char first[100];
    char second[100];
    char combined[202];
    int index;
    int combined_index = 0;

    printf("Input the first string: ");
    scanf("%99[^\n]", first);
    printf("Input the second string: ");
    scanf(" %99[^\n]", second);

    for (index = 0; first[index] != '\0'; index++)
    {
        combined[combined_index] = first[index];
        combined_index++;
    }
    combined[combined_index] = ' ';
    combined_index++;
    for (index = 0; second[index] != '\0'; index++)
    {
        combined[combined_index] = second[index];
        combined_index++;
    }
    combined[combined_index] = '\0';

    printf("After concatenation the string is:\n%s\n", combined);
    return 0;
}
