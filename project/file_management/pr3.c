#include <stdio.h>
#include <string.h>
int main(){
	FILE* fp ;
	char word[20];
	
	char keyword[][10] = {"int","float","char","if","else","for","while","return"};
	char op[][6] = {"+","-","*","/","="};
	fp = fopen("input.txt","r");
	
	if(fp == NULL){
		printf("file not found\n");
		return 1 ;
	}
	printf("Keyword in the file:\n");
	while(fscanf(fp,"%s",word) != EOF){
		for(int i = 0 ; i < 8 ; i++){
			if(strcmp(word,keyword[i]) == 0){
				printf("%s\n",word);
			}
		}
		for(int j = 0 ; j < 6 ; j++){
			if(strcmp(word,op[j]) == 0){
				printf("%s -> oparator\n",word);
			}
		}
		
	}
	fclose(fp);
	return 0 ;
}
