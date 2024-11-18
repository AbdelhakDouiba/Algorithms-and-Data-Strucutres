#include "client.h"

/**
 * deleteClient - deletes a client from clients tree
 * @root: the root of the target bst
 * @name: client name
 *
 * Return: a pointer to the root
 */

client *deleteClient(client *root, char *name)
{
    client *tmp = root, *p = root->right;
    if (root == NULL)
        return (root);

    if (strcmp(name, root->name) > 0)
        root->right = deleteClient(root->right, name);
    else if (strcmp(name, root->name) < 0)
        root->left = deleteClient(root->left, name);
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
