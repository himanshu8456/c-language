#include <stdio.h>

int main()
{
    printf("enter the number of seconds: ");
    int seconds;
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;
    printf("the time is: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    return 0;
}