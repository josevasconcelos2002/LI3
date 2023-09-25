#include "deque.h"
#include <stdlib.h>

Deque *create()
{
    Deque *new = malloc(sizeof(Deque));
    new->size = 0;
    new->first = NULL;
    new->last = NULL;
    return new;
}

void push(Deque *deque, void *data)
{
    Node *newNode = malloc(sizeof(Node));
    if (newNode)
    {
        newNode->data = data;
        newNode->next = NULL;
    }
    if (deque)
    {
        if (newNode)
        {
            deque->last->next = newNode;
            deque->last = newNode;
            deque->size++;
        }
    }

    else
    {
        deque = create();
        if (deque)
        {
            if (newNode)
            {
                deque->first = newNode;
                deque->last = newNode;
                deque->size++;
            }
        }
    }
}

void pushFront(Deque *deque, void *data)
{
    Node *newNode = malloc(sizeof(Node));
    if (newNode)
    {
        newNode->data = data;
        if (deque)
        {
            newNode->next = deque->first;
            deque->first = newNode;
        }
        else
        {
            deque = create();
            deque->first = newNode;
            newNode->next = NULL;
        }
    }
}
