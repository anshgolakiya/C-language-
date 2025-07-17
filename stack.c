#include <stdio.h>
#include <stdlib.h>
int main()
{
    int top = -1 , size , value ,choice;
    int *arr ;
    printf("Enter a size of stack : ");
    scanf("%d",&size);
    arr = (int*)malloc(size*(sizeof(int)));
    do
    {
        printf("\nEnter ayour choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if(top == size -1)
            {
                printf("Stack id overflow\n");
            }
            else
            {
                top++;
                printf("enter a value to push : ");
                scanf("%d",&value);
                arr[top] = value;
                printf("Value pushed successfully\n");
            }
            break;
        case 2 :
            if(top == -1)
            {
                printf("stack is empty.\n");
            }
            else
            {
                value = arr[top] ;
                top--;
                printf("%d is pop",value);
            }
            break;
        case 3 :
            if(top == -1)
            {
                printf("stack is empty.\n");
            }
            else
            {
                printf("%d ",arr[top]);
            }
            break;
        case 4 :
            if(top == -1)
            {
                printf("stack is empty.\n");
            }
            else
            {
                for(int i =0 ; i <= top ; i++)
                {
                    printf("%d ",arr[i]);
                }
            }
            break;
      
        }
    }while(choice != 5);
    return 0 ;
}