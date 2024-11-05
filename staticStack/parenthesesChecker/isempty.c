#include "sstack.h"

/**
* isEmpty - check if the static stack is empty
* @sstack: the target stack to be checked
*
* Return: True if the stack is empty, otherwise False.
*/
int isEmpty(SStack* sstack)
{
    if (sstack->top == 0)
        return (true);
    return (false);
}