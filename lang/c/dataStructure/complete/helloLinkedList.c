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

    int input = -1;
    printf("input a node name(int)(0 to exit)");
    scanf("%d", &input);



    while(1){
        if(input == 0) break;
        
        current = (node*)malloc(sizeof(node));
        current -> name = input;
        current -> next = NULL;

        if(head == NULL)    {   head = current; pre=current;    }
        else                {   pre->next = current; pre = current;     }
        

        printf("input a node name(int)");
        scanf("%d", &input);
        
    }
    
    node* p = (node*)malloc(sizeof(node));
    p = head;
    while(1){
        printf("%d", p->name);
        if(p->next==NULL)   {   printf("\n");   break;  }
        printf("->");
        p = p -> next;       
    }
}
