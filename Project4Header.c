#include "Project4Header.h"

float sales_tax(float total)
{
    float result = 0;

    result = total * TAXRATE;

    return result;
}

float total_after_tax(float total, float tax)
{
    float result = 0;

    result = total + tax;

    return result;
}
