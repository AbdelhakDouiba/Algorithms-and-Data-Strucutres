#include "tree.h"

/**
 * initTree - initilize a binary search tree.
 * @root: the root of the binary search tree.
 */
void initTree(bst *root)
{
    root->right = NULL;
    root->left = NULL;
}