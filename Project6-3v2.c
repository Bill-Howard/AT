#include <stdio.h>
#include <string.h>

struct record
{
    char name[50];
    char email[50];
    char phone[50];
};

void display_menu();
void list_record(const struct record rec[], int num);
void view_record(const struct record rec[]);
void add_record(struct record rec[], int *num);
void delete_record(struct record rec[], int *num);

int main(void)
{
    struct record list_o_records[10] = {0};
    struct record p1 = {"Guido Van Rossum", "BDFL@pythn.org", "123-456-7890"};
    struct record p2 = {"Eric Idle", "eric@ericidle.com", "+44 20 7946 0958"};
    int num_records = 2;
    int rec_no = 0;
    char choice[5] = {0};
    char list[] = "list";
    char view[] = "view";
    char add[] = "add";
    char del[] = "del";
    char exit[] = "exit";

    list_o_records[0] = p1;
    list_o_records[1] = p2;

    printf("Contact Manager\n\n");

    display_menu();

    while (1)
    {
        printf("Enter a choice: ");
        scanf("%s", choice);

        if (strcmp(choice, list) == 0)
        {
            list_record(list_o_records, num_records);
        }
        else if (strcmp(choice, view) == 0)
        {
            view_record(list_o_records);
        }
        else if (strcmp(choice, add) == 0)
        {
            add_record_p(list_o_records, &num_records);
        }
        else if (strcmp(choice, del) == 0)
        {
            delete_record(list_o_records, &num_records);
        }
        else if (strcmp(choice, exit) == 0)
        {
            break;
        }
    }
    return 0;
}

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
