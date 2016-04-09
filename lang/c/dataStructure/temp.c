#include<stdio.h>

int currentArray[]={};
int  getUserInput();
int exitCode = -1;
void bubble_sort(int *p, int arrayLength);
void show_result(int *p, int arrayLength);

int main(){
	int arrLength = getUserInput(currentArray);
	bubble_sort(currentArray, arrLength);
	show_result(currentArray, arrLength);
}

int getUserInput(int *tempArray){	
	int counter = 0;
	do{
		printf("please input nunber(-1 to end input): ");
		scanf("%d",&tempArray[counter]);
		counter++;
	}while( tempArray[counter-1] != exitCode );
	return counter-1;
}

void bubble_sort(int *p, int arrayLength){
	int flag = 0;
	for (int i=arrayLength-1; i>=0;  i--){
		for (int j=0; j<i; j++){
			if ( p[j+1]<p[j] ){
				flag = p[j];
				p[j] = p[j+1];
				p[j+1] = flag;
			}
		}
	}
}

void show_result(int *p, int arrayLength){
	for (int i=0; i<arrayLength ; i++){
		printf("%d", p[i]);
		if (i<arrayLength-1 ) printf(", ");
		else printf("\n");
	} 
}
