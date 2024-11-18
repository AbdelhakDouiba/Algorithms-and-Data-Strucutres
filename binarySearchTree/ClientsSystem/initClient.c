#include "client.h"

/**
 * initClient - initilize clients binary search tree.
 * @root: the root of the binary search tree.
 */
void initClient(client *root)
{
    root->right = NULL;
    root->left = NULL;
}