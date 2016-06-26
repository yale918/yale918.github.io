#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
    char name;
    struct list* next;
};

typedef struct list node;

int main(){
    node* head = NULL;
    node* current = NULL;
    node* pre = NULL;

    int input;
    int counter=0;
    scanf("%d", &input);

    while(1){
        counter++;
        current = (node*)malloc( sizeof(node) );

        current->name = input;
        current->next = NULL;

        printf("node %d current name is %d\n",counter, current->name);

        if(head==NULL) {  head=current; pre=current; }
        else{   pre -> next = current;  }
        pre = current;

        scanf("%d", &input);
        if(input==0){   break;  }

    }
    printf("break while\n");

    node* p = NULL ;
    p = (node*)malloc( sizeof(node) );
    p = head;

    while(1){
        printf("%d",p->name);
        if(p->next==NULL) break;
        printf("->");
        p = p->next;
    }
}
