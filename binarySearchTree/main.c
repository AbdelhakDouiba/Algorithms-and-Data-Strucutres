#include "tree.h"

/**
 * main - running and testing bst functions.
 * 
 * Return: 0 at success, non zero value if it failed.
 */
int main(void)
{
    int table[10] = {15, 10, 19, 4, 6, 9, 34, 1, 60, 20}, i;
    bst *root = NULL;

    // creating the tree
    for (i = 0; i < 10; i++)
        insertNode(&root, table[i]);

    // displaying the tree
    displayTree(root);
    printf("\n");

    // counting and the displaying the total number of nodes
    printf("the total number of nodes is : %d\n", countNodes(root));

    // finding the min and the max keys
    printf("the min is : %d\nthe max is: %d\n", findMin(root), findMax(root));


    // deleting node with 60 as a key
    root = deleteNode(root, 60);

    printf("---------------\nAfter deleting the node with key = 60\n---------------\n");

    // displaying the updated tree
    displayTree(root);
    printf("\n");

    // calculating and displaying the height
    printf("the height of the tree is : %d\n", calculateHeight(root));

    // counting and the displaying the total number of nodes
    printf("the total number of nodes is : %d\n", countNodes(root));

    // deleting node with 9 as a key
    root = deleteNode(root, 9);

    printf("---------------\nAfter deleting the node with key = 9\n---------------\n");

    // displaying the updated tree
    displayTree(root);
    printf("\n");

    // calculating and displaying the height
    printf("the height of the tree is : %d\n", calculateHeight(root));

    // counting and the displaying the total number of nodes
    printf("the total number of nodes is : %d\n", countNodes(root));

    // destroying the tree
    destroyTree(&root);

    return (0);
}
