#include "deque.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int data1 = 1;
    int data2 = 2;
    int data3 = 3;
    Deque *newDeque = NULL;
    push(&newDeque, &data1);
    push(&newDeque, &data2);
    push(&newDeque, &data3);
    pushFront(&newDeque, &data3);
    print(&newDeque);
    void *poped = pop(&newDeque);
    if (poped)
    {
        int *elementPoped = (int *)poped;
        printf("Element %d was poped\n", *elementPoped);
    }
    if (newDeque)
    {
        print(&newDeque);
        free(newDeque);
    }
    else
    {
        printf("Erro: newDeque é NULL!\n");
    }

    return 0;
}