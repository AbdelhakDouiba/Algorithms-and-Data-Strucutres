#ifndef SSTACK_H
#define SSTACK_H

/*
* The maximum number of character to exist in the stack's items string
*/
#define MAX 100

/**
 * SStack - A static Stack containing:
 * @items: a string
 * @top: an indicator to the top element of the stack
 */
typedef struct SStack
{
    char items[MAX];
    int top;
} SStack;

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void initSStack(SStack* sstack);
void push(SStack* sstack, char data);
int isFull(SStack* sstack);
char pop(SStack* sstack);
int isEmpty(SStack* sstack);
int isBalanced(char *exp);

#endif