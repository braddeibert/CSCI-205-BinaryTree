#include "node.h"
#include <stdio.h>
#include <stdlib.h>

void printNodeIn(node* n) {
	if (n == NULL) {
		return;
	}
	printNodeIn(n->left);
	printf("%d ", n->value);
	printNodeIn(n->right);
}

void printNodePre(node* n) {
	if (n == NULL) {
		return;
	}
	printf("%d ", n->value);
	printNodePre(n->left);
	printNodePre(n->right);
}

void printNodePost(node* n) {
	if (n == NULL) {
		return;
	}
	printNodePost(n->left);
	printNodePost(n->right);
	printf("%d ", n->value);
}

int depth(node* n) {
	if (n == NULL) {
		return 0;
	}
	int left = depth(n->left);  
	int right = depth(n->right);  
	      
	if (left > right) return(left + 1);  
	else return(right + 1);  
}	
