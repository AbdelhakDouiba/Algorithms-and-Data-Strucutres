#include "client.h"

/**
 * createClient - create a new client
 * @name: the name of the client
 * @phone: client phone
 * @orders: client's number of orders
 *
 * Return: a pointer to the root
 */
client *createClient(char *name, char *phone, int orders)
{
    int i;

    client *newclient = (client *)malloc(sizeof(client));
    if (newclient == NULL)
        return (NULL);

    initClient(newclient);
    for(i = 0; name[i] !='\0'; i++)
        (newclient->name)[i] = name[i];
    (newclient->name)[i] = '\0';
    newclient->orders = orders;
    for(i = 0; phone[i] != '\0'; i++)
        (newclient->phone)[i] = phone[i];
    (newclient->phone)[i] = '\0';
    return (newclient);
}