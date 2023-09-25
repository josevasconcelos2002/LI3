#ifndef DEQUE_H
#define DEQUE_H

#include "node.h"

typedef struct deque
{
    int size;
    Node *first;
    Node *last;
} Deque;

Deque *create();
void push(Deque *deque, void *data);
void pushFront(Deque *deque, void *data);

#endif