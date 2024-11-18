#include "client.h"

/**
 * insertClient - insert a new client into the tree
 * @root: the root of the binary search tree.
 * @order: number of orders made by the client
 * @name: client name
 * @phone: client phone number
 *
 * Return: a pointer to the root
 */
client *insertClient(client **root, char *name, char *phone, int orders)
{
    if (*root == NULL)
    {
        *root = createClient(name, phone, orders);
        return (*root);
    }
    
    if (strcmp(name, (*root)->name) >= 0)
        (*root)->right = insertClient(&((*root)->right), name, phone, orders);
    else if (strcmp(name, (*root)->name) < 0)
        (*root)->left = insertClient(&((*root)->left), name, phone, orders);

    return (*root);
}