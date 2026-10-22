#include <stdio.h>
int main()
{
    int a[100], n, count = 0, num = 2, i, prime;
    printf("Enter how many prime numbers: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("Invalid n");
        return 0;
    }
    while (count < n)
    {
        prime = 1;
        for (i = 2; i * i <= num; i++)
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        if (prime)
            a[count++] = num;
        num++;
    }
    printf("First %d prime numbers: ", n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
