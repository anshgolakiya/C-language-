#include <stdio.h>
#include <ctype.h>
#define size 100
int stack[size] ;
int top = -1 ;
void push(char ch)
{
    if(top == size -1)
    {
        printf("stacke is full.\n");
    }
    else
    {
        stack[++top] = ch ;
    }
}
int pop()
{
    if(top == -1)
    {
        printf("stake is empty.\n");
    }
    else
    {
        return stack[top--] ;
    }
}
int main()
{
    char postfix[size] ;
    printf("Enter a postfix expression : ");
    scanf("%s",postfix);
    char *exe = postfix ;
    while(*exe != '\0')
    {
        if(isdigit(*exe))
        {
            push((*exe) - '0');
        }
        else
        {
            int num2 = pop() ;
            int num1 = pop() ;
            switch(*exe)
            {
                case '+' :
                    push(num1+num2);
                    break;
                case '-' :
                    push(num1-num2);
                    break;
                case '*' :
                    push(num1*num2);
                    break;
                case '/' :
                    if(num2 == 0)
                    {
                        printf("num2 is 0 then division not possible.\n");
                    }
                    else
                    {
                    push(num1/num2);
                    }
                    break;     
            }
        }
        exe++ ;
    }
    printf("result = %d",pop());
    return 0 ;
}