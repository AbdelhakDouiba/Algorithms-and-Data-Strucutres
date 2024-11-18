#ifndef TREE_H
#define TREE_H

/*
 * bst - is a binary search tree consists of a key, right subtree and a left subtree.
 * @key: current node key
 * @right: right subtree
 * @left: left subtree
 */
 typedef struct bstree{
    int key;
    struct bstree *right;
    struct bstree *left;
 }bst;

#include <stdio.h>
#include <stdlib.h>

void initTree(bst *root);
bst *createNode(int key);
bst *deleteNode(bst *root, int key);
bst *insertNode(bst **root, int key);
int findMin(bst *root);
int findMax(bst *root);
int countNodes(bst *root);
void displayTree(bst *root);
int calculateHeight(bst *root);
void destroyTree(bst **root);

#endif