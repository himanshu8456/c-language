#include <stdio.h>
int main()
{
    char s[30];
    int f[10] = {0}, i, max = 0, digit = 0;
    printf("Enter the mobile number: ");
    scanf("%29s", s);
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= '0' && s[i] <= '9')
            f[s[i] - '0']++;
    for (i = 0; i < 10; i++)
        if (f[i] > max)
        {
            max = f[i];
            digit = i;
        }
    printf("Digit %d occurs %d times", digit, max);
    return 0;
}
