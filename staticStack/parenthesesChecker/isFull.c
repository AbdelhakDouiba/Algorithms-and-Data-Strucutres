#include "sstack.h"

/**
* isFull - check if the static stack is full
* @sstack: the target stack to be checked
*
* Return: True if the stack is full, otherwise False.
*/
int isFull(SStack* sstack)
{
    if (sstack->top >= MAX)
        return (true);
    return (false);
}