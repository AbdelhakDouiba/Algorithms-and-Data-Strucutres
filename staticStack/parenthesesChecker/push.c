#include "sstack.h"

/**
* push - insert data into the stack
* @sstack: the target stack
* @data: data to be inserted
*/
void push(SStack* sstack, char data)
{
    if (isFull(sstack))
    {
        printf("The stack is full, your data can't be pushed to the stack\n");
    }
    else
    {
        sstack->items[sstack->top] = data;
        sstack->top++;
    }
}