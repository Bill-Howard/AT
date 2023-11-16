#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

void print_list(Node *head);
Node *insert_at_head(Node *head, int value);
Node *insert_at_tail(Node *head, int value);
Node *delete_at_head(Node *head);
Node *delete_at_tail(Node *head);
int length (Node *head);

int main(void)
{
    Node a, b, c;
    a.value = 5;
    b.value = 6;
    c.value = 7;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    print_list(&a);

}

void print_list(Node *head)
{
    Node *current;
    current = head;
    int i = 0;
    while (current != NULL)
    {
        printf("Node %d: %d\n", i, current->value);
        i++;
        current = current->next;
    }
}

Node *insert_at_head(Node *head, int value)
{
    Node *new_node = calloc(1, sizeof(Node));
    new_node->value = value;

    if (head == NULL) {
        return new_node;
    } else {
        new_node->next = head;
        return new_node;
    }
}

Node *insert_at_tail(Node *head, int value)
{
    Node *new_node = calloc(1, sizeof(Node));
    new_node->value = value;

    if (head == NULL) {
        return new_node;
    } else {
        Node *current = head;

        while ( current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
        return head;
    }
}

Node *delete_at_head(Node *head)
{
    if (head == NULL) {
        return NULL;
    } else {
        Node *to_return = head->next;
        free(head);
        return to_return;
    }
}

Node *delete_at_tail(Node *head)
{
    if (head == NULL) {
        return NULL;
    } else if (head->next == NULL) {
        free(head);
        return NULL;
    } else {
        Node *current = head;
        Node *prev = NULL;

        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }

        prev->next = NULL;
        free(current);
        return head;
    }
}

int length (Node *head)
{
    Node *current;
    int length = 0;

    current = head;
    while (current->next != NULL) {
        length++;
        current = current->next;
    } 
    return length;
}