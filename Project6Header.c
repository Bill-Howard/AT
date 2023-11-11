#include <stdio.h>
#include <string.h>

#include "Project6Header.h"

void display_menu()
{
    printf("COMMAND MENU\n");
    printf("list - Display all contacts\n");
    printf("view - View a contact\n");
    printf("add - Add a contact\n");
    printf("del - Delete a contact\n");
    printf("exit - Exit program\n\n");
}

void list_record(const struct record rec[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Name: %s\n", rec[i].name);
        printf("Email: %s\n", rec[i].email);
        printf("Phone: %s\n\n", rec[i].phone);
    }
}

void add_record(struct record rec[], int *num)
{
    struct record p1 = {0};
    int temp = *num;

    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter email: ");
    scanf("%s", p1.email);
    printf("Enter phone number: ");
    scanf("%s", p1.phone);

    rec[temp++] = p1;
    *num = temp;
    printf("\n");
}

void view_record(const struct record rec[])
{
    int num = 0;

    printf("Enter record number: ");
    scanf("%d", &num);

    num = num - 1;

    printf("\nName: %s\n", rec[num].name);
    printf("Email: %s\n", rec[num].email);
    printf("Phone: %s\n\n", rec[num].phone);
}

void delete_record(struct record rec[], int *num)
{
    int rec_no = 0;
    int temp = *num;

    printf("Enter number: ");
    scanf("%d", &rec_no);
    printf("%s was deleted.\n\n", rec[rec_no - 1].name);
    memset(rec[rec_no - 1].name, 0, sizeof(rec[rec_no - 1].name));
    memset(rec[rec_no - 1].email, 0, sizeof(rec[rec_no - 1].email));
    memset(rec[rec_no - 1].phone, 0, sizeof(rec[rec_no - 1].phone));
    temp--;
    *num = temp;
    printf("\n");
}