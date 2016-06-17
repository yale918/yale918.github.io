#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
    int name;
    struct list* next;
}

typedef struct list node;

int main(string[] args){
    node* head = NULL;
    node* current = NULL;
    node* prev = NULL;
    
    int input =-1;
    printf("input node name:");
    scanf("%d", &input);

    while(1){
        if(input == 0) break;
        current = (node*)malloc(sizeof(node));
        current -> name = input ;
        current -> next = NULL;
        
        if(head ==NULL) head = current;
        else            
    
    }

}

