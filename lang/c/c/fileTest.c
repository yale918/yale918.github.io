#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    char ch;
    int count=0;

    fptr = fopen("c:\\prog\\welcome.txt","r");
    if(fptr!=NULL){
        while((ch=getc(fptr))!=EOF){
            printf("%c",ch);
            count++;
        }
        fclose(fptr);
    }
    else
        printf("檔案開啟失敗\n");

    return 0;

}
