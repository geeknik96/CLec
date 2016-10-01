#ifndef C_EXAMPLES_LIST_H
#define C_EXAMPLES_LIST_H

#include "Node.h"

struct List {
    struct Node *start;
    size_t size;
};

struct List get_empty_list();
void add_item(struct List *list, size_t idx, int item);
void del_item(struct List *list, size_t idx, int item);
int at(struct List *list, size_t idx);
void delete_list(struct List *list);

#endif //C_EXAMPLES_LIST_H
