#include "client.h"

/**
 * main - running and testing clients management system
 *
 * Return: 0 if it succeed, non zero value if it failed.
 */
int main(void)
{
    int orders, i, numberClients;
    char name[50], phone[15];
    client *root = NULL;

    printf("enter the number of clients: ");
    scanf("%d", &numberClients);
    // creating the clients tree
    for (i = 0; i < numberClients; i++)
    {
        printf("----client %d's data----\n", i + 1);
        printf("enter client name: ");
        scanf("%49s", name);
        printf("enter client phone: ");
        scanf("%15s", phone);
        printf("enter client orders number: ");
        scanf("%d", &orders);
        insertClient(&root, name, phone, orders);
    }

    printf("\nDisplaying all the clients-------------\n");

    // displaying clients
    displayClients(root);

    printf("\n-------------------------\n");

    // count clients
    printf("the number of clients is : %d\n", countClient(root));

    printf("\n-------------------------\ndisplaying client with orders between 4 and 10 :\n");

    // display range
    displayRange(root, 4, 10);

    printf("\n-------------------------\nSearching for the client 'Jack': \n");

    // Search client "Jack"
    searchClient(root, "Jack");

    printf("\n-------------------------\n");

    // total orders
    printf("total orders is : %d\n", totalOrders(root));

    printf("\n-------------------------\n");

    // destroying the tree
    destroyTree(&root);

    return (0);
}
