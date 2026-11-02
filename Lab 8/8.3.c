#include <stdio.h>

int main()
{
    char first[300];
    char second[100];
    int first_length;
    int index;

    printf("Input the first string: ");
    scanf("%299[^\n]", first);
    printf("Input the second string: ");
    scanf(" %99[^\n]", second);

    for (first_length = 0; first[first_length] != '\0'; first_length++)
    {
    }

    if (first_length > 0 && second[0] != '\0' && first[first_length - 1] == second[0])
    {
        for (index = 0; second[index] != '\0'; index++)
        {
            first[first_length + index] = second[index];
        }
        first[first_length + index] = '\0';
        printf("Concatenated string: %s\n", first);
    }
    else
    {
        printf("The characters do not match, so the strings were not concatenated.\n");
    }

    return 0;
}
