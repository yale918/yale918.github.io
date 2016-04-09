#include<stdio.h>

struct node{
	int data;
	struct node *next;
}listNode;

int main(){
	listNode head = (listNode *)malloc( sizeof(listNode));
	printf(head);
	head -> next = null;

	return 0;
}
