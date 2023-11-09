#include <stdio.h>

int main(void)
{
    float cost = 0;
    float tip = 0;

    printf("Tip Calculator\n\n");

    printf("Enter the cost of the meal: ");
    scanf("%f", &cost);

    printf("\n15%%\n");
    tip = cost * .15;
    printf("Tip amount is   $%.2f\n", tip);
    printf("Total amount is $%.2f\n\n", tip + cost);

    printf("20%%\n"); 
    tip = cost * .20;
    printf("Tip amount is   $%.2f\n", tip);
    printf("Total amount is $%.2f\n\n", tip + cost);

    printf("25%%\n");
    tip = cost * .25;
    printf("Tip amount is   $%.2f\n", tip);
    printf("Total amount is $%.2f\n\n", tip + cost);

    return 0;
}