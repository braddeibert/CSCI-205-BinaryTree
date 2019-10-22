#ifndef NODE_H
#define NODE_H

typedef struct Node_struct {
   int value;
   struct Node_struct* left;
   struct Node_struct* right;
} ContactNode;

#endif
