#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "llist.h"

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


int main(void)
{


    return 0;
}

void print_list(Node *head)
{
    Node *ptr = NULL;
    ptr = head;
    int i = 1;

    while (ptr->next != NULL) {
        printf("%d. ID: %d\n", i, ptr->id);
        i++;
        ptr = ptr->next;
    }
}

Node *insert_at_head(Node *head, int id, char fname[], char lname[], char cname[],
                     char address[], char city[], char state[], int zip)
{
    Node *new_node = calloc(1, sizeof(Node));
    if (new_node == NULL) {
        puts("Memory allocation error in insert_at_head()\n");
        exit(EXIT_FAILURE);
    }

    new_node->id = id;
    strncpy(new_node->f_name, fname, strlen(fname)+1);
    strncpy(new_node->l_name, lname, strlen(lname)+1);
    strncpy(new_node->c_name, cname, strlen(cname)+1);
    strncpy(new_node->address, address, strlen(address)+1);
    strncpy(new_node->city, city, strlen(city)+1);
    strncpy(new_node->state, state, strlen(state)+1);
    new_node->zip = zip;

    if (head == NULL) {
        return new_node;
    } else {
        new_node->next = head;
        return new_node;
    }

}

Node *insert_at_tail(Node *head, int value)
{
    ;
}

Node *delete_at_head(Node *head)
{
    ;
}

Node *delete_at_tail(Node *head)
{
    ;
}

Node *destroy(Node *node)
{
    int i = 0;
    Node *ptr = NULL;
    
    if (node == NULL) {
        return node;
    }
      
    while (node != NULL) {
        ptr = node;
        node = node->next;
        free(ptr);    
    }

    return node;
}
