#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE* fp ;
	char ch ;
	int count = 0 ;
	fp = fopen("demo.txt", "w");
	fprintf(fp,"welcome");
	fclose(fp);
	
	fp = fopen("demo.txt" , "r");
	ch = fgetc(fp);
	if(fp == NULL){
		printf("Enter valid file");
	}
	else{
		while(ch != EOF){
			count++;
			ch = fgetc(fp);
		}
	}
	printf("total : %d",count);
	fclose(fp);
}
