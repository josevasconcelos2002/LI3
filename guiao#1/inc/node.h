#ifndef NODE_H
#define NODE_H

typedef struct node
{
    void *data;
    struct node *next;
} Node;

#endif