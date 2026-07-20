#include <stdio.h>
#include <string.h>
#include <ctype.h>
char keyword[][10] = {"int","float","char","if","else","for","while","return"};
int iskeyword(char str[]){
	int i ;
	for(i = 0 ; i < 8 ; i++){
			if(strcmp(str,keyword[i]) == 0){
				return 1 ;
			}
		}
	return 0 ;	
}
int isOperator(char ch){
	return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '<'|| ch == '>' | ch == '%' );
}
int isSpecialSymbol(char ch){
	return (ch == ';' || ch == '(' || ch == ')' || ch == '{' || ch == '}'|| ch == '[' | ch == ']' ); 
}
int main(){
	FILE* fp ;
	char ch ;
	char token[100] ;
	int i ;

	fp = fopen("input.txt","r");
	
	if(fp == NULL){
		printf("file not found\n");
		return 1 ;
	}
	
	printf("Lexical Analyzer : ");
	
	while((ch = fgetc(fp)) != EOF){
		if(isalpha(ch) || ch == ' '){
		i = 0 ;
		token[i++] = ch ;
		while(ch = fgetc(fp) != EOF && (isalnum(ch) || ch == ' ')){
			token[i++] = ch ;
			token[i] = '\0' ;
		if(iskeyword(token))
			printf("%-20s : Keyword\n",token);
		else
			printf("%-20s : Identifier\n",token);
			
		}
		
		if(ch != EOF)
			ungetc(ch,fp);
		}
		else if(isdigit(ch)){
			i = 0 ;
			token[i++] = ch ;
			while((ch = fgetc(fp)) != EOF && (isdigit(ch))){
				token[i++] = ch ;
			}
			token[i] ='\0' ;
			printf("%-20s : Integer Constant\n",token);
			if(ch = EOF)
				ungetc(ch,fp);
		}
		else if(isOperator(ch)){
			printf("%-20s : Operator\n",token);
		}
		else if(isSpecialSymbol(ch)){
			printf("%-20s : Special Symbols\n",token);
		}
		
	}
	fclose(fp);
	return 0 ;
}
