#include "client.h"

/**
 * destroyTree - destroy a the tree of clients and free the allocated space
 * @root: the root of the clients tree.
 */
void destroyTree(client **root)
{
    while (*root != NULL)
        *root = deleteClient(*root, (*root)->name);
    printf("The tree has been destroyed!\n");
}