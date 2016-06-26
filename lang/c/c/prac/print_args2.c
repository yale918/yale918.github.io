#include<stdio.h>
#include<stdarg.h>
void print_args(char* p, ...){
    va_list ap;
   // char *p;
   

    va_start(ap, p);
    
    while( p!= NULL){
        printf("%s ", p);
        p = va_arg(ap, char*);

    }
    va_end(ap);

}

int main(void){


    print_args("hi","hello", "world","\n", NULL);

    print_args("welcome","China", "beijing", "Olympic","\n", NULL);
    return 0;

}
