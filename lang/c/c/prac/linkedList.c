#include<stdio.h>
#include<stdlib.h>
struct list{
    int name;
    struct list* next;
};

typedef struct list node;
int getInput();
void showList(node* head);
int main(){
    node* prev = NULL;
    node* current = NULL;
    node* head = NULL;
    int input;

    //input = getInput();

    while(1){
        //input = getInput();
        //printf("\nplease input an int('0' to exit input): ");
        input = getInput();
        if(input == 0) {
            printf("使用者結束\n");
            break; 
        }       
        current = (node*)malloc(sizeof(node));       
        current->name = input;
        current->next = NULL;
        if(head == NULL)    head = current;
        else                prev -> next = current;    
        prev = current; 

    }
    
    showList(head);
    return 0;

}


int getInput(){
    int tmp;
    printf("\nplease input an int(0 to exit):");
    scanf("%d", &tmp);
    //printf("\n");
    return tmp;
}
void showList(node* head){
    node* p = NULL;

    p = (node*)malloc(sizeof(node));
    p = head;
    while(p!= NULL){
        printf("%d", p->name);
        p=p->next;
        if(p==NULL){
            printf("\n");
            break;
        }
        printf("->");
    }
}
