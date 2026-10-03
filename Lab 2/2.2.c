#include <stdio.h>

int main()
{
    printf("enter a number: ");
    int num;
    scanf("%d", &num);
    int pre = ++num;
    printf("the pre incremented value is: %d\n", pre);
    num--;
    int post = num++;
    printf("the post incremented value is: %d\n", post);
    int diff = pre - post;
    printf("the difference between pre and post incremented values is: %d\n", diff);
    return 0;
}
