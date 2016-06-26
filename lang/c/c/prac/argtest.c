#include<stdio.h>
#include<stdarg.h>

void argTest(char* c, ...){
    va_list list;
    va_start(list,c);
    while(c!= NULL){
        printf("%s ", c);
        c = va_arg(list,char*);
    }
    va_end(list);
}

int main(void){
    argTest("hi","123","\n",NULL);
    return 0;
}
