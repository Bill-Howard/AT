#include <stdio.h>
#include <string.h>

int main(void)
{
    char ans[4] = {0};
    char yes[] = "yes";
    float cost = 0;
    float total = 0;
    float shipping = 0;

    printf("Shipping Calculator\n\n");

    while (1)
    {
        printf("Enter item cost: ");
        scanf("%f", &cost);

        while (cost <= 0)
        {
            printf("\nPlease enter a valid cost: ");
            scanf("%f", &cost);
        }

        if (cost < 30.00)
        {
            shipping = 5.95;
        }
        else if (cost <= 49.99)
        {
            shipping = 7.95;
        }
        else if (cost <= 74.99)
        {
            shipping = 9.95;
        }
        else
        {
            shipping = 0;
        }

        total = shipping + cost;
        if (shipping == 0)
        {
            printf("Shipping cost is free.\n");
        }
        else
        {
            printf("Shipping cost is %.2f\n", shipping);
        }
        printf("Total cost is    %.2f\n\n", total);

        printf("Continue (yes/no): ");
        scanf("%s", ans);
        printf("\n");

        if (strcmp(yes, ans) != 0)
        {
            break;
        }
    }

    return 0;
}