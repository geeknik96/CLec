#include <stdio.h>
#include <stdlib.h>

#include "Node.h"

struct Node * new_node()
{
    const size_t node_size = sizeof(struct Node);
    struct Node *node = (struct Node *)malloc(node_size);
    if (node == NULL) {
        perror("Error: ");
        return node;
    }
    node->next = NULL;
    return node;
}

void delete_node(struct Node *node)
{
    free(node);
}