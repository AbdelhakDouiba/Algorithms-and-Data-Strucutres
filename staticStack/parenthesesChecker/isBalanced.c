#include "sstack.h"

/**
 * isBalanced - checks if a certain expression is balanced
 * @exp: the target expression
 * Return: 1 if the expression is balanced, 0 if it isn't.
 */

int isBalanced(char *exp)
{
    
    SStack sstack;
    int i;

    // initialize the stack
    initSStack(&sstack);

    // Analyzing and evaluating the expression
    for(i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(&sstack, exp[i]);
        else if ((exp[i] == ')' && pop(&sstack) != '(') 
                  || (exp[i] == '}' && pop(&sstack) != '{') 
                  || (exp[i] == ']' && pop(&sstack) != '['))
            return (0);
    }
    if (isEmpty(&sstack))
        return (1);
    return (0);
}