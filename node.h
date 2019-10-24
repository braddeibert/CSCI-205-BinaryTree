#ifndef NODE_H
#define NODE_H

typedef struct node_struct {
   int value;
   struct node_struct* left;
   struct node_struct* right;
} node;

void printNodeIn(node* n);
void printNodePre(node* n);
void printNodePost(node* n);
int depth(node* n);

#endif
