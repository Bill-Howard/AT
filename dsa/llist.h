#include <stdbool.h>

#ifndef LLIST_H
#define LLIST_H

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_list(Node *head);
Node *insert_at_head(Node *head, int value);
Node *insert_at_tail(Node *head, int value);
Node *delete_at_head(Node *head);
Node *delete_at_tail(Node *head);
int length(Node *head);
bool is_member(Node *head, int value);
int count(Node *head, int value);
void replace(Node *head, int value, int replacement);
Node *delete_first_match(Node *head, int value, bool *was_deleted);
Node *delete_match(Node *head, int value, int *num_deleted);
void sort_list(Node *head);
void delete_duplicates(Node *head);
Node *delete_list(Node *node);
Node *insert_after(Node *head, int new_value, int after_value);
Node *merge_sorted_lists(Node *list1, Node *list2);
Node *duplicate_list(Node *node);
void add_lists(Node *list1, Node *list2);
Node *delete_all_matches(Node *head, int delete_value, int *num_deleted);

#endif