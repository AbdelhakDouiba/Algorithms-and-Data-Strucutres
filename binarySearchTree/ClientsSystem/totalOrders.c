#include "client.h"

/**
 * totalOrders - counts the number of client's orders
 * @root: clients tree
 *
 * Return: the number of clients
 */
int totalOrders(client *root)
{
    if (root == NULL)
        return (0);
    
    return totalOrders(root->left) + totalOrders(root->right) + root->orders;
}