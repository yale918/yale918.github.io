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

    char input = '0';
    printf("eneter the node name: ");
    input = getchar();

    while(1){
        if (input == '0') break;

        current = (node*)malloc(sizeof(node));
        current -> name = input;
        current -> next = NULL;

        if(head == NULL){   head = current; pre = current;  }
        else            {   pre -> next = current;  pre = current;}



        printf("eneter the node name: ");
        input = getchar();
    }

    node* p = NULL;
    p = (node*)malloc(sizeof(node));
    p = head;

    while(1){
        printf("%d",p->name);
        if( p->next == NULL )break;
        printf("->");
        p = p-> next;
    }
    printf("\n... 程式結束 謝謝光臨 ...\n");
}
