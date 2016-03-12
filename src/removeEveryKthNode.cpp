/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int pos) {
	if (head == NULL || pos <= 1)
		return NULL;
	else
	{
		int count = 0;
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp = head;
		while (temp->next != NULL)
		{
			count++;
			if (count%pos == pos - 1 && temp->next->next != NULL&&temp->next != NULL)
			{
				temp->next = temp->next->next;
			}
			else if (count%pos == pos - 1 && temp->next->next == NULL&&temp->next != NULL)
			{
				temp->next = NULL;
				break;
			}
			else 
				temp = temp->next;
			
		}
		return head;
	}
}