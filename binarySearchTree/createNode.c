#include "tree.h"

/**
 * createNode - create a new bst node
 * @key: the key of the new node
 *
 * Return: a pointer to the root
 */
bst *createNode(int key)
{
    bst *newNode = (bst *)malloc(sizeof(bst));
    if (newNode == NULL)
        return (NULL);
    initTree(newNode);
    newNode->key = key;
    return (newNode);
}