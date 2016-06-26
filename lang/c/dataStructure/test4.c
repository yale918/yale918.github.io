#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct list{
    int no;
    char cont[50];
    struct list* next;
};
typedef struct list node;

int main(){
    node* head = NULL;
    node* current = NULL;
    node* prev = NULL;
    int no;
    char cont[50];

    while( 1 ){
        //printf("no :");
        scanf("%d", &no);
        printf("%d\n",no);
        /*
        if( no == 0 )break;
        current = (node*)malloc( sizeof(node) );
        if( current == NULL){
            printf("Errorn");
            return 1;
        }
        current->no = no;
        printf("cont :");
        scanf("%s", cont);
        strncpy(current->cont,cont,49);

        current->next = NULL;
        if(head == NULL){
            head = current;
            prev = current;
        }
        else{
            prev->next = current;
        }
        prev = current;
        */
    }
    //For Display
    /*
    current = head;
    while( 1 ){
        printf("%d,%sn", current->no, current->cont);
        if( current->next == NULL)break;
        current = current->next;
    }
    */
    return 0;
}
