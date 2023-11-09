#include <stdio.h>
#include <string.h>
#include "Project4Header.h"

int main(void)
{
    float total = 0;
    float cost = 0;
    char yes[] = "yes";
    char ans[4] = {0};

    printf("Sales Tax Calculator\n\n");

    while (1)
    {
        while (1)
        {
            printf("Enter item cost. Enter 0 to quit. : ");
            scanf("%f", &cost);
            if (cost == 0)
            {
                break;
            }
            total = total + cost;
        }

        printf("\nTotal:             %.2f\n", total);
        printf("Tax:               %.2f\n", sales_tax(total));
        printf("Total after tax:   %.2f\n\n", total_after_tax(total, sales_tax(total)));

        printf("Continue (yes/no): ");
        scanf("%s", ans);

        if (strcmp(yes, ans) != 0)
        {
            break;
        }
        printf("\n\n");
        total = 0;
    }

    return 0;
}
