#include<stdio.h>
#include<stdlib.h>
typedef struct test{
	int data;
}TEST;

int main(){
	//struct test a;
	//a.data = 1;	
	//struct test *c = &a;	
	//printf("c->data= %d \n", c->data);
	
	TEST *b = (TEST*) malloc(sizeof(TEST));
	b->data = 1;
	printf("b->data= %d\n", b->data);


/*
	printf("a.data= %d \n", a.data);
	
	struct test * b;
	b->data = 1;
*/
	//printf("b= %d \n", b);
	//int c=1+b->data;
	//printf("c= %d \n",c);
}
