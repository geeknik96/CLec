#include <stdio.h>
#include <stdlib.h>

#include "List.h"

struct List get_empty_list()
{
    struct List list;
    list.start = NULL;
    list.size = 0;
    return list;
}

void add_item(struct List *list, size_t idx, int item)
{
    struct Node *current = list->start;
    size_t current_idx = 0;

    while (current != NULL && current_idx != idx) {
        current = current->next;
        current_idx++;
    }

    struct Node *node = new_node();
    if (node == NULL) {
        delete_list(list);
        exit(-1);
    }

    if (current != NULL) {
        current->next = node;
        current->data = item;
        list->size++;
    } else {
        list->start = node;
        list->size = 1;
    }
}

void del_item(struct List *list, size_t idx, int item)
{
    struct Node *current = list->start;
    size_t current_idx = 0;

    while (current != NULL && current_idx != idx) {
        current = current->next;
        current_idx++;
    }

    delete_node(current)

    struct Node *node = new_node();
    if (node == NULL) {
        delete_list(list);
        exit(-1);
    }

    if (current != NULL) {
        current->next = node;
        current->data = item;
        list->size++;
    } else {
        list->start = node;
        list->size = 1;
    }
}

int at(struct List *list, size_t idx);

void delete_list(struct List *list)
{

}