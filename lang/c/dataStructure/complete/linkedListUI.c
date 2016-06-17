#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
    int name;
    struct list*i next;
}
typedef struct list node;

void UI();
void createList();
void showList();
void insertNode();
void deleteNode();

node* head = NULL;
node* current = NULL;
node* pre = NULL;

int input = -1;


int main(){
    
    while(1){    
        printf("1)createList 2)showList 3)insertNode 4)deleteNode\n");
        scanf("%d", &input);
        switch(input){
            case 1:
                createList();
                break;
            case 2:
                showList();
                break;
            case 3:
                int insertData[2]={0,0};
                *insertData = insertRequest();
                node* iNode;
                iNode = (node*)malloc(sizeof(node));
                iNode->name = insertData[0];
                insertNode(iNode,insertData[1]);

                break;
            case 4:
                break;
            case 5:
                printf("離開程式!\n");
                return 0;
            default:
                break;

        }
    }
}
int * insertRequest(){
    int insertData[2];
    printf("輸入name: ");
    scanf("%d", insertData[0]);
    printf("插入name: ");
    scanf("%d", insertData[1]);
    return insertData;
}

void insertNode(node* node, int insertName){
    node* p = parse(insertName);
    node->next = p->next;
    p->next=node;
    
}

node * parse(int target){
    node* p = (node*)malloc(sizeof(node));
    p = head;
    while(1){
        if (target == p->name)      {   return p;   }
        else if (p->next==NULL)     {   printf("\n");   break;  }
        else                        {   p = p -> next;  }
    }

}

void createList(){
    printf("input a node name(int)(0 to exit)");
    scanf("%d", &input);

    while(1){
        if(input == 0) {    printf("break createList\n");   break;  }

        current = (node*)malloc(sizeof(node));
        current -> name = input;
        current -> next = NULL;

        if(head == NULL)    {   head = current; pre=current;    }
        else                {   pre->next = current; pre = current;     }


        printf("input a node name(int)");
        scanf("%d", &input);

    }

}

void showList(){
    node* p = (node*)malloc(sizeof(node));
    p = head;
    while(1){
        printf("%d", p->name);
        if(p->next==NULL)   {   printf("\n");   break;  }
        printf("->");
        p = p -> next;       
    }


}


