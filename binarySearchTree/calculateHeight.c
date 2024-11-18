#include "tree.h"

/**
 * calculateHeight - calculates the height of a bst
 * @root: the root of a bts
 *
 * Return: bst's height.
 */

int calculateHeight(bst *root)
{
    int leftHeight, rightHeight;

    if (root == NULL)
        return (0);

    leftHeight = calculateHeight(root->left);
    rightHeight = calculateHeight(root->right);
    
    if (leftHeight > rightHeight)
        return (leftHeight + 1);
    else
        return (rightHeight + 1);
}