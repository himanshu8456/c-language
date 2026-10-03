#include <stdio.h>
int main()
{
    char name[50];
    printf("write your name:");
    scanf("%s", name);
    char branch[50];
    printf("what is your branch:");
    scanf("%s", branch);
    printf("what is your age:");
    int age;
    scanf("%d", &age);
    printf("Hello, %s! You are %d years old and in the %s branch.", name, age, branch);
    return 0;
}