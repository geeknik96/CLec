#ifndef C_EXAMPLES_NODE_H
#define C_EXAMPLES_NODE_H

struct Node {
    struct Node *next;
    int data;
};

struct Node * new_node();
void delete_node(struct Node *node);

#endif //C_EXAMPLES_NODE_H
