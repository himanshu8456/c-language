#include <stdio.h>
int evennumbers()
{
    int i;
    for (i = 2; i <= 20; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}
int main()
{
    evennumbers();
    return 0;
}