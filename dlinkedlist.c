#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
struct node *global;


void insertEnd(int value)
{
    global = start;
    struct node *new_node = (struct node *)malloc(sizeof(struct node *));
    struct node *last;

    if (start == NULL)
    {
        new_node->data = value;
        new_node->next = new_node->prev = new_node;
        start = new_node;
        return;
    }
    last = (start)->prev;
    new_node->data = value;
    new_node->next = start;
    (start)->prev = new_node;
    new_node->prev = last;
    last->next = new_node;
}
void insertBegin(int value)
{
    global = start;
    struct node *last;
    last = (start)->prev;

    struct node *new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->data = value;
    new_node->next = start;
    new_node->prev = last;

    last->next = (start)->prev = new_node;


    start = new_node;
}
