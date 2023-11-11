#ifndef PROJECT6HEADER_H
#define PROJECT5HEADER_H

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

#endif