#include<stdio.h>
#define MAX_Item 5
#include<stdlib.h>
typedef struct tagStack{
	char Item[MAX_Item];
	int top;
} STACK ;

STACK stack;

int show(STACK *stk);
int push(STACK *stk, char item);



void main(){
	STACK stk;
	int option;
	char item;
	stk.top = 0;
	stk.Item[stk.top] = 'a';
	printf("%c\n",stk.Item[stk.top]);
	stk.top++;



/*
	printf("comment(1:push / 2:pop / 3:show): ");
	scanf("%d%c",&option, &item );

	while(1){
		 switch(option){
		 	case 1:
				printf("hello world1\n");
				//push(&stk, item);	
				break;	
			case 2:
				break;
			case 3:
				printf("hello world2\n");	
				//show(&stk);
				break;
			case 4:
				break;
		 	
		}

		printf("comment(1:push / 2:pop / 3:show): ");
		system("pause");
		scanf("%d%c",&option, &item );
		if(option == 4)
			break;
	}
*/

}

int push(STACK *stk, char item){
	if(stk->top >= MAX_Item )	return 0;
	else{
		stk->Item[stk->top] = item;
		stk->top++;
		return 1;
	}
}

int show(STACK *stk){
	for(int i = stk->top-1; i >= 0; i--){
		printf("|%c|",stk->Item[i]);
		printf("---");
	}
}
