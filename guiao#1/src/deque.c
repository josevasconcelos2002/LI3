#include "deque.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

Deque *create()
{
    Deque *new = malloc(sizeof(Deque));
    new->size = 0;
    new->first = NULL;
    new->last = NULL;
    return new;
}

void print(Deque **deque)
{
    if (*deque)
    {
        Node *current = (*deque)->first;
        while (current)
        {
            int *element = (int *)current->data;
            printf("%d -> ", *element);
            current = current->next;
        }
        if (!current)
            printf("X");
        printf("\n");
    }
}

void push(Deque **deque, void *data)
{
    Node *newNode = malloc(sizeof(Node));
    if (newNode)
    {
        newNode->data = data;
        newNode->next = NULL;
    }
    if (*deque)
    {
        if (newNode)
        {
            (*deque)->last->next = newNode;
            (*deque)->last = newNode;
            (*deque)->size++;
        }
    }
    else
    {
        *deque = create();
        if (*deque)
        {
            if (newNode)
            {
                (*deque)->first = newNode;
                (*deque)->last = newNode;
                (*deque)->size++;
            }
        }
    }
}

void pushFront(Deque **deque, void *data)
{
    Node *newNode = malloc(sizeof(Node));
    if (newNode)
    {
        newNode->data = data;
        if (*deque)
        {
            newNode->next = (*deque)->first;
            (*deque)->first = newNode;
            (*deque)->size++;
        }
        else
        {
            (*deque) = create();
            (*deque)->first = newNode;
            newNode->next = NULL;
            (*deque)->size++;
        }
    }
}

void *pop(Deque **deque)
{
    void *result = NULL;
    if (*deque && (*deque)->size > 0)
    {
        Node *current = (*deque)->first;
        Node *previous = NULL;
        while (current->next)
        {
            previous = current;
            current = current->next;
        }
        if (previous)
        {
            previous->next = NULL;
        }
        result = current->data;
        free(current);
        (*deque)->size--;
    }
    return result;
}

void *popFront(Deque **deque)
{
    void *result = NULL;
    if ((*deque) && (*deque)->size > 0)
    {
        Node *first = (*deque)->first;
        (*deque)->first = first->next;
        result = first->data;
        free(first);

        (*deque)->size--;
    }
    return result;
}

int size(Deque *deque)
{
    int size = -1;
    if (deque)
    {
        size = (deque)->size;
    }
    return size;
}

bool isEmpty(Deque *deque)
{
    bool result = true;
    if (deque)
    {
        if ((deque)->size > 0)
            result = false;
    }
    return result;
}
