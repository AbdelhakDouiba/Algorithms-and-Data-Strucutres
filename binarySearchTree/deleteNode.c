#include "tree.h"

/**
 * deleteNode - deletes a key from the bst
 * @root: the root of the target bst
 * @key: the key to be deleted
 *
 * Return: a pointer to the root
 */

bst *deleteNode(bst *root, int key)
{
    bst *tmp = root, *p = root->right;
    if (root == NULL)
        return (root);

    if (key > root->key)
        root->right = deleteNode(root->right, key);
    else if (key < root->key)
        root->left = deleteNode(root->left, key);
    else
    {
        if (root->right == NULL)
            root = root->left;
        else if (root->left == NULL)
            root = root->right;
	else
	{
            while (p != NULL && p->left != NULL)
            	p = p->left;
            if (p != NULL)
            	p->left = root->left;
            root = root->right;
	}
        free(tmp);
    }
    return (root);
}
