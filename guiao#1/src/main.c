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
    void *popedBack = pop(&newDeque);
    void *popedFront = popFront(&newDeque);
    if (popedBack)
    {
        int *elementPoped = (int *)popedBack;
        printf("Element %d was poped from the back\n", *elementPoped);
        print(&newDeque);
    }
    if (popedFront)
    {
        int *elementPoped = (int *)popedFront;
        printf("Element %d was poped from the front\n", *elementPoped);
        print(&newDeque);
    }
    if (newDeque)
    {
        print(&newDeque);
        int dequeSize = size(&newDeque);
        printf("\nThis Deque has now %d of size\n", dequeSize);
        free(newDeque);
    }
    else
    {
        printf("Erro: newDeque é NULL!\n");
    }

    return 0;
}