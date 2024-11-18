#include "tree.h"

/**
 * findMin - finds the max key of bst
 * @root: the root of the bst
 *
 * Return: the max key or exists with -1 if the root is NULL
 */

int findMax(bst *root)
{
    if (root == NULL)
    {
        printf("Error! the three is empty");
        exit(-1);
    }
    if (root->right == NULL)
        return (root->key);
    return findMax(root->right);
}