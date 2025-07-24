#include <stdio.h>
#include <ctype.h>
#define size 100

char stack[size] ;
int top = -1 ;

void push(char ch)
{
    if(top == size-1)
        printf("stack is overflow.\n");
    else
        stack[++top] = ch ;
}
char pop()
{
    if(top == -1)
        printf("stack is empty.\n");
    else
        return stack[top--] ;
}
int priority(char ch)
{
    if(ch =='(')
        return 0 ;
    if(ch == '+' || ch == '-')
        return 1 ;
    if(ch == '*' || ch == '/')
        return 2 ;
    if(ch == '^')
        return 3 ;
    return 0 ;
}
int main()
{
    char infix[size] ,ch ;
    
    printf("Enetr a infix expresion : ");
    scanf("%s",infix);

    char *exe = infix ;

    while (*exe != '\0')
    {
        if(isalnum(*exe))
            printf("%c",*exe);
        else if(*exe == '(')
            push(*exe);
        else if(*exe == ')')
        {
            while((ch = pop()) != '(')
                printf("%c",ch);
        }
        else
        {
            while(priority(stack[top]) >= priority(*exe))
            {
                printf("%c",pop());
            }
            push(*exe);
        }
        exe++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
    return 0 ;
}