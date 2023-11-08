#include <stdio.h>

int main(void)
{
    char first[50] = {0};
    char last[50] = {0};
    int year = 0;

    printf("Registration Form\n\n");

    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);
    printf("Enter birth year: ");
    scanf("%d", &year);

    printf("\nWelcome %s %s!\n", first, last);
    printf("Your registration is complete.\n");
    printf("Your passsword is %s*%d\n", first, year);
}