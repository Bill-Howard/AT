#include <stdio.h>

int main(void)
{
    float p64 = 0;
    float p32 = 0;
    float o64 = 0;
    float o32 = 0;

    printf("Price Comparison\n\n");

    printf("Enter price for 64 oz: ");
    scanf("%f", &p64);
    printf("Enter price for 32 oz: ");
    scanf("%f", &p32);

    o64 = p64 / 64;
    o32 = p32 / 32;

    printf("\nThe price for 64 oz is %.2f.\n", o64);
    printf("The price for 32 oz is %.2f.\n", o32);
}