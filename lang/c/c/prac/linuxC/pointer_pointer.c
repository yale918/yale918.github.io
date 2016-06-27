#include<stdio.h>

int main(void){
    int a;
    int *p;
    int **q;

    a = 100;
    p = &a;
    q = &p;
    
    printf("value   of a : %d\n", a);
    printf("address of a : 0x%x\n", &a);
    
    printf("--------------------\n");

    printf("value of pointer p : %d\n", *p);
    printf("address of pointer p : 0x%x\n", p); 
    printf("address of addressof pointer p : 0x%x\n",&p);

    printf("--------------------\n");

    printf("L1 pointer pointer: %d\n",**q);
    printf("L2 pointer pointer: 0x%x\n",*q);
    printf("L2 pointer pointer: 0x%x\n",q);
    printf("L4 pointer pointer: 0x%x\n",&q);
 
    return 0;

}
