#include "client.h"

/**
 * displayClients - in-order traversal to display the bst in ascending order
 * @root: the root of the bst to be displayed
 */
void displayClients(client *root)
{
    if (root != NULL)
    {
        displayClients(root->left);

        printf("client : %s (orders = %d, phone = %s)\n", root->name, root->orders, root->phone);

        displayClients(root->right);
    }
}