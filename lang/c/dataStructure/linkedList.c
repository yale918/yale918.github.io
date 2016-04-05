typedef struct node{
	int data;
	struct node *next;} NODE;

NODE *head;

NODE *getnode(void){
	NODE *p;
	p = (NODE*) malloc(sizeof(NODE));

	if (p == NULL){
		printf("記憶體不足");
		exit(1);
	}
	return(p);	
}

void *freenode(NODE *p){
	free(p);
}

NODE search_node(NODE *p, int num){
	NODE *ptr;

	ptr = head;
	while (q != NULL && q-> data != num)
		q = q-> next;
	return(q);
}

NODE find_node(NODE *head, int num){
	NODE *ptr;
	
	ptr = head;
	while (ptr != NULL){
		if ( ptf->num == num)
			return(ptr);
		ptr = ptr->next;
	}
	return (ptr);
}
