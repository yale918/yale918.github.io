#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
    int name;
    struct list* next;
};

typedef struct list node;

int main(){
    node* head = NULL;
    node* current = NULL;
    node* pre = NULL;

    int input = 0;
    printf("enter list name: ");
    scanf("%d", &input);

    while(1){
        if(input == 0) break;

        current = (node*)malloc( sizeof(node) );
        current -> name = input;
        current -> next = NULL;
        if(head == NULL)   head = current;
        else   {    pre -> next = current;  }
        pre = current;

        printf("enter list name: ");
        scanf("%d", &input);

    }

    node* p = NULL;
    p = (node*)malloc(sizeof(node));
    p = head;

    while(1){
        printf("%d",p->name);
        if(p->next == NULL) break;
        printf("->");
        p = p->next;
    }
}
