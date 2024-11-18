#include "tree.h"

/**
 * countNodes - counts the number of nodes exists in bst
 * @root: the root of a bst
 *
 * Return: the number of nodes
 */
int countNodes(bst *root)
{
    if (root == NULL)
        return (0);
    
    return countNodes(root->left) + countNodes(root->right) + 1;
}