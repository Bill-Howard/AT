#include <stdio.h>
#include <string.h>

#include "Project6Header.h"

// TO DO: create the struct with heap space, create the array with heap space, add input validation, add a switch statement if it makes sense

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
            add_record(list_o_records, &num_records);
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
