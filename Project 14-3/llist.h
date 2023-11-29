#ifndef LLIST_H
#define LLIST_H

typedef struct node {
    int id;
    char f_name[25];
    char l_name[25];
    char c_name[25];
    char address[25];
    char city[25];
    char state[25];
    int zip;
    struct node *next;

}Node;

void print_list(Node *head);
Node *insert_at_head(Node *head, int id, char fname[], char lname[], char cname[],
                     char address[], char city[], char state[], int zip);
Node *insert_at_tail(Node *head, int value);
Node *delete_at_head(Node *head);
Node *delete_at_tail(Node *head);
Node *destroy(Node *node);


#endif