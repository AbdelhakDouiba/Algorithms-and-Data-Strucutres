#include "client.h"

/**
 * countClient - counts the number of clients 
 * @root: clients tree
 *
 * Return: the number of clients
 */
int countClient(client *root)
{
    if (root == NULL)
        return (0);
    
    return countClient(root->left) + countClient(root->right) + 1;
}