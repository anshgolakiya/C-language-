#include <stdio.h>
#define size 100
int stack[size] ;
int top = -1 ;
void push()
{
    if(top == size-1)
    {
        printf("stack is full.\n");
    }
    else
    {
        int data ;
        printf("Enter a data you want to insert in stack : ");
        scanf("%d",&data);
        stack[++top] = data ;
    }
}
void pop()
{
    if(top ==  -1)
    {
        printf("stack is empty.\n");
    }
    else
    {
        int data = stack[top--] ;
        printf("%d is succesfully poped from stack.\n",data); 
    }
}
void peek()
{
    if(top == -1)
    {
        printf("stack is empty.\n");
    }
    else
    {
        printf("%d is top element of stack",stack[top]);
    }
}
void dispaly()
{
    if(top == -1)
    {
        printf("stack is empty.\n");
    }
    else
    {
        printf("stack : \n");
        for(int i = 0 ; i <= top ; i++)
            printf("%d ",stack[i]);
        printf("\n");
    }
}
int main()
{
    int choice ;
    printf("1. push \n2. pop \n3. diaplay \n");
    do
    {
        printf("Enetr your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 :
                peek();
                break;
            case 4 :
                displat();
                break;
            default :
                printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0 ;
}