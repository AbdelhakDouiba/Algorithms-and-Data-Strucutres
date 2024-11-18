#include "tree.h"

/**
 * displayTree - in-order traversal to display the bst in ascending order
 * @root: the root of the bst to be displayed
 */
void displayTree(bst *root)
{
    if (root != NULL)
    {
        displayTree(root->left);

        printf("%d ", root->key);

        displayTree(root->right);
    }
}