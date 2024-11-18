#include "tree.h"

/**
 * destroyTree - destroy a bst and free the allocated space
 * @root: the root of the bst.
 */
void destroyTree(bst **root)
{
    while (*root != NULL)
        *root = deleteNode(*root, (*root)->key);
    printf("The tree has been destroyed!\n");
}