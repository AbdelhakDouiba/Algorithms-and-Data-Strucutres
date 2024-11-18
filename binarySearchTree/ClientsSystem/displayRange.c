#include "client.h"

/**
 * displayClientsInOrderRange - in-order traversal to display the clients in a range
 * @root: the root of the bst to be displayed
 * @rangeMin: the min of the range
 * @rangeMax: the max of the range
 */
void displayClientsInOrderRange(client *root, int rangeMin, int rangeMax)
{
    if (root != NULL)
    {
        displayClientsInOrderRange(root->left, rangeMin, rangeMax);

        if (rangeMin < root->orders && root->orders < rangeMax)
            printf("client : %s (orders = %d, phone = %s)\n", root->name, root->orders, root->phone);

        displayClientsInOrderRange(root->right, rangeMin, rangeMax);
    }
}

/**
 * rangeCheck - check if there a client in certain range, by returning 0 if no clients exist
 *              or the number of the clients.
 * @root: the root of the bst to be displayed
 * @rangeMin: the min of the range
 * @rangeMax: the max of the range
 *
 * Return: the number of clients exists the range
 */
int rangeCheck(client *root, int rangeMin, int rangeMax)
{
    if (root == NULL)
        return (0);
    if (rangeMin < root->orders && root->orders < rangeMax)  
        return rangeCheck(root->left, rangeMin, rangeMax) + rangeCheck(root->right, rangeMin, rangeMax) + 1;
    else
        return rangeCheck(root->left, rangeMin, rangeMax) + rangeCheck(root->right, rangeMin, rangeMax);
}

/**
 * displayRange - the clients exists in a range
 * @root: the root of the bst to be displayed
 * @rangeMin: the min of the range
 * @rangeMax: the max of the range
 */

int displayRange(client *root, int rangeMin, int rangeMax)
{
    if (rangeCheck(root, rangeMin, rangeMax) > 0)
        displayClientsInOrderRange(root, rangeMin, rangeMax);
    else
        printf("There is no client in this range !");
}