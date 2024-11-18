#include "tree.h"

/**
 * findMin - finds the min key of bst
 * @root: the root of the bst
 *
 * Return: the min key or exists with -1 if the root is NULL
 */

int findMin(bst *root)
{
    if (root == NULL)
    {
        printf("Error! the three is empty");
        exit(-1);
    }
    if (root->left == NULL)
        return (root->key);
    return findMin(root->left);
}