/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *root, *temp;
	

	root = (struct node *)malloc(sizeof(struct node));
	if (N >= 0 && N < 10)
	{
		root->num = N;
		root->next = NULL;
		return root;
	}

	if (N < 0)
		N = -N;
	temp =( struct node *)malloc(sizeof(struct node));
	root = NULL; 
	while (N>0)
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->num = N % 10;
		temp->next = NULL;
		if (root == NULL)
			root = temp;
		else
		{
			temp->next = root;
			root = temp;
		}
		N = N / 10;
	}
	
	return root;
}