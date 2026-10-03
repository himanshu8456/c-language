#include <stdio.h>

int main()
{
    printf("enter the quantity of items: ");
    int quantity;
    scanf("%d", &quantity);
    printf("enter the price per item: ");
    float price;
    scanf("%f", &price);
    float total_cost = quantity * price;
    printf("the total cost is: %f\n", total_cost);
    return 0;
}