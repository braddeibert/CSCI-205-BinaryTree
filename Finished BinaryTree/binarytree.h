#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "node.h"

typedef struct binary_tree_struct
{
    node* root;
    int size;
} binary_tree;

void initialize(binary_tree* bt);
int checkInitialize(binary_tree* bt);
_Bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
int checkinsert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);

#endif


