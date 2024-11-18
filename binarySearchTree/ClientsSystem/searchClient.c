#include "client.h"

/**
 * searchClient - in-order traversal to search for a client using its name
 * @root: the root of the client tree
 * @name: client name
 */
void searchClient(client *root, char *name)
{
    if (root == NULL)
    {
        printf("Client doesnt exist\n");
        return;
    }

    if (strcmp(name, root->name) == 0)
    {
        printf("client exist, this is its data --> ");
        printf("%s (orders = %d, phone = %s)\n", root->name, root->orders, root->phone);
        return;
    }
    else if (strcmp(name, root->name) < 0)
        searchClient(root->left, name);
    else
        searchClient(root->right, name);
}