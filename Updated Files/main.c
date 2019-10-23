#include "node.h"
#include "binarytree.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int value = 0;
	_Bool found;

	binary_tree bt;
	initialize(&bt);
	
	FILE* inFile = NULL; // File pointer

    	inFile = fopen("file.txt", "r");

    	if (inFile == NULL) {
       		printf("Could not open file myfile.txt.\n");
       		return -1; // -1 indicates error
    	}
	
	fscanf(inFile,"%d",&value);
    	while (!feof(inFile)) { 
		insert(&bt, value);
		fscanf(inFile,"%d",&value);
	}
		 
	printf("Print in order\n");
	printinorder(&bt);
	printf("\nPrint pre order\n");
	printpreorder(&bt);
	printf("\nPrint post order\n");
	printpostorder(&bt);
	printf("\n");
	found = search(&bt,33);
	if (found){
	printf("FOUND 33\n");
	}
	found = search(&bt,38);
	if (found){
	printf("FOUND 38\n");
	}
	printf("Number of elements in tree: %d\n", btsize(&bt));
	printf("Tree height: %d\n", treeheight(&bt));

	return 0;
}
