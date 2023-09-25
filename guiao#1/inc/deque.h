#ifndef DEQUE_H
#define DEQUE_H

#include "node.h"
#include <stdbool.h>

typedef struct deque
{
    int size;
    Node *first;
    Node *last;
} Deque;

Deque *create();
void push(Deque **deque, void *data);
void pushFront(Deque **deque, void *data);
void *pop(Deque **deque);
void print(Deque **deque);
void *popFront(Deque **deque);
int size(Deque *deque);
bool isEmpty(Deque *deque);

#endif