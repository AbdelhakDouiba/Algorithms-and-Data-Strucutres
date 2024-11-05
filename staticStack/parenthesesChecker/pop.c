#include "sstack.h"

/**
* pop - remove data from the stack
* @sstack: the target stack
*
* Return: the value of the removed element, -1 if the stack is empty
*/
char pop(SStack* sstack)
{
    char data = -1;

    if (!isEmpty(sstack))
    {
        data = sstack->items[sstack->top - 1];
        sstack->top--;
    }
    return data;
}