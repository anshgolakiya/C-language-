#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE* fp ;
	char ch;
	fp = fopen("demo.txt", "w");
	
	fprintf(fp,"hello world ");
	fprintf(fp,"hi linux");
	fclose(fp);
	
	fp = fopen("demo.txt" , "r");
	ch = fgetc(fp);
	if(fp == NULL){
		printf("Enter valid file");
	}
	else{
		while(ch != EOF){
			printf("%c" , ch);
			ch = fgetc(fp);
		}
		
	}
	fclose(fp);
}
