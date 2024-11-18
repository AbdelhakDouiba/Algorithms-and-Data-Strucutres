#include "tree.h"

/**
 * insertNode - insert a new key into the bst
 * @root: the root of the binary search tree.
 * @key: the new value to be inserted
 *
 * Return: a pointer to the root
 */
bst *insertNode(bst **root, int key)
{
    if (*root == NULL)
    {
        *root = createNode(key);
        return (*root);
    }
    
    if (key >= (*root)->key)
        (*root)->right = insertNode(&((*root)->right), key);
    else if (key < (*root)->key)
        (*root)->left = insertNode(&((*root)->left), key);

    return (*root);
}