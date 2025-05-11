#include <stdio.h>
#include <stdlib.h>


void push(int *arr , int *top , int size) ;
void pop(int *arr , int *top) ;
void display(int *arr , int *top) ;
void clear_screen() {
    // Clear the console screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int main()
{
    printf("\nStatk management system\n") ;
    printf("1. press 1 for push\n") ;
    printf("2. press 2 for pop\n") ;
    printf("3 . press 3 for Exit\n") ;
    int top = -1 , size , choice , res ;
    int *arr ;

    printf("Enter the size of stack : ");
    scanf("%d",&size) ;
    do
    {
        printf("\nEnter your choice : ") ;
        scanf("%d",&choice) ;
        switch(choice)
        {
            case 1 :
                push(arr , &top , size) ;
                display(arr , &top) ;
                break ;  
            case 2 :
                pop(arr , &top) ;
                display(arr , &top) ;
                break ;
            case 3 :
                printf("Exit\n") ;
                break ;

        }
    
    } while (choice != 4) ;
    
}
void push(int *arr , int *top , int size)
{
    int element ;
    if(*top == size-1)
    {
        printf("Stack is overflow.");
    }
    else
    {
        (*top)++ ;
        printf("Enter a element to push : ");
        scanf("%d",&element);
        arr[*top] = element ;
        printf("Element %d pushed successfully.\n",element) ;
    }
}
void pop(int *arr , int *top)
{
    int element ;
    if(*top == -1)
    {
        printf("Stack is empty.\n") ;
    }
    else
    {
        element = arr[*top] ;
        (*top)-- ;
        printf("Element %d popped successfully.\n",element) ;
    }
}
void display(int *arr , int *top)
{
    if(*top == -1)
    {
        printf("Stack is empty.\n") ;
    }
    else
    {
        printf("Stack elements are : \n");
        for(int i = 0 ; i <= *top ; i++)
        {
            printf("%d ",arr[i]);
        }
    }
}