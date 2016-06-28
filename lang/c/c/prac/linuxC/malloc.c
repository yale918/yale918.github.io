#include<stdio.h>
#include<stdlib.h>

void alter(int **p){
    int *q;

    q = (int *)malloc(sizeof(int));

    *q = 100;
    *p = q;
}
