#ifndef CLIENT_H
#define CLIENT_H

/*
 * client - is a binary search tree consista of name, phone and number of orders made by aclients.
 * @orders: number of orders made by the client
 * @name: name of the client
 * @phone: client phone number
 * @right: right subtree
 * @left: left subtree
 */
typedef struct Client {  
   char name[50];  
   char phone[15];  
   int orders; 
   struct Client *left;  
   struct Client *right;  
} client;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


client *createClient(char *name, char *phone, int orders);
int countClient(client *root);
client *insertClient(client **root, char *name, char *phone, int orders);
void searchClient(client *root, char *name);
int totalOrders(client *root);
void displayClientsInOrderRange(client *root, int rangeMin, int rangeMax);
void initClient(client *root);
void displayClients(client *root);
void destroyTree(client **root);
client *deleteClient(client *root, char *name);
int rangeCheck(client *root, int rangeMin, int rangeMax);
int displayRange(client *root, int rangeMin, int rangeMax);

#endif