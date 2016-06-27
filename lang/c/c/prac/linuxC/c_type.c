#include<stdio.h>

struct test{
    int a;
    int b;
    int c;

};
typedef struct test test;

int main(void){
    int a[10];
    int *p;
    test var;

    printf("array : %d\n", sizeof(a));
    printf("pointer : %d\n", sizeof(p));
    printf("struct : %d\n", sizeof(test));
    
    return 0;

}
