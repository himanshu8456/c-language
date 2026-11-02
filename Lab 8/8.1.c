#include <stdio.h>

int main()
{
    char text[100];
    int index;

    printf("Input the string: ");
    scanf("%99[^\n]", text);

    for (index = 0; text[index] != '\0'; index++)
    {
    }

    printf("Length of the string is: %d\n", index);
    return 0;
}
