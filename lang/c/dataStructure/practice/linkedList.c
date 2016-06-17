#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list{
    int name ;
    struct list* next;
};

typedef struct list node;

int main(){
    node* head = NULL;
    node* current = NULL;
    node* prev = NULL;

    int input = -1;
    printf("please input node name: ");
    scanf("%d", &input); 
    
    while(1){
        if(input==-1)   break;
        
        current = (node*)malloc(sizeof(node));
        current->name = input;
        current -> next = NULL;
        
       

        if( head == NULL )  head = current;
        else                prev->next = current;
        prev = current;
        printf("prev name = %d\n", prev->name);  
        printf("please input node name: ");
        scanf("%d", &input); 
    }
    
    node* p = NULL;
    p = (node*)malloc(sizeof(node));
    p = head;

    while(1){

        printf("%d", p->name);

        if(p ->next == NULL){
            printf("\n");
            break;
        }
        printf("->");
        p = p->next;
    }

}
