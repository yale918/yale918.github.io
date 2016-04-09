#include<stdio.h>
#include<stdlib.h>


typedef struct node{
  int id;
  int data;
  struct node *next;
}ListNode;


int main(){
	int counter = 0;
	ListNode *head = NULL;
	ListNode *current = NULL;
	ListNode *previous = NULL;
	
	ListNode *newNode = (ListNode *) malloc(sizeof(ListNode));	
	counter++;
	newNode-> id = counter;
	newNode-> data = 100;
	
	newNode->next= NULL;
	head = newNode;
	current = newNode;
//printf("1)head->data= %d\n", head -> data);
	
	free(newNode);
	
	newNode  = (ListNode *) malloc(sizeof(ListNode));
	counter ++;
//printf("1.0)head->data= %d\n", head -> data);
	current->next = newNode;
	newNode-> next= NULL;
//printf("1.0.1)head->data= %d\n", head -> data);	
	newNode-> id = counter;
//printf("1.0.2)head->data= %d\n", head -> data);	
	newNode-> data = 200;
	
	
	
//printf("1.1)head->data= %d\n", head -> data);
	current = newNode;
//printf("1.2)head->data= %d\n", head -> data);

	
	//ListNode *head = (ListNode *) malloc(sizeof(ListNode));
	
	
//printf("2)head->data= %d\n", head -> data);
	
	ListNode *pointer;
	pointer = head;
//printf("3)head->data= %d\n", head -> data);

	while(pointer != NULL){
		printf("node->id= %d\n", pointer -> id);
		printf("node->data= %d\n", pointer -> data);
		pointer = pointer -> next;
	}
	
	//b->data = 1;
	
	//printf("head.data= %d \n", head->data);
	
	return 0;
}
