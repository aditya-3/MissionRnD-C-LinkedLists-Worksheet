/*

Use MainLinkedLists1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Do not write same add,display function in every CppFile .VS throws an error if two files
have some functions with same signature.
You can either change the signature in each file by using add1,display2 like that or 
keep a common header file which has functions for handling common tasks for debugging
like displaying and include that header file in each Problem file .

Only jump into this lesson after you did all specified functions in Tutorial Lesson.

Objectives of C-LinkedLists-1 Lesson:

->Add/Delete/Display nodes in SLL
->Manipulate Links in SLL
->Handling SLL which have nodes of more than one data field


*/


//Do not edit below Header Files
#include <stdio.h>
#include "FunctionHeadersLinkedLists1.h"
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node * createNode(int n1) {
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = n1;
	newNode->next = NULL;
	return newNode;
}

void add(struct node **head, int p){
	struct node *temp = *head;
	if (*head == NULL){
		(*head) = createNode(p);
		(*head)->next = NULL;
	}
	else{
		while (temp->next != NULL){
			temp = temp->next;
		}
		temp->next = createNode(p);
		temp->next->next = NULL;
	}
}

int main(){

	//Test 012SortSll

	//Test numberToLinkedList

	//Test removeEveryKthNode

	//Test sortLinkedList

	//Test twodigitLinkedList
	int num = 0;
	struct node *head = NULL;
	int num_array[100] = { 1, 2, 1, 1, 1, 2, 2, 0, 0, 0, 2, 1 };
	int output[100] = { 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2 };
	int len = 12;
	int i = 0;
	for (i = 0; i<len; i++)
	{
		add(&head, num_array[i]);
	}
	sll_012_sort(head);

	return 0;
}