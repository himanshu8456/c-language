#include <stdio.h>

int main(){
    int num1;
    printf("enter the number to check even or odd without using % operator: ");
    scanf("%d", &num1);
    if(num1 & 1)
        printf("the number is odd");
    else
        printf("the number is even");
    return 0;
}