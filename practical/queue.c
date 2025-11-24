#include <stdio.h>
#define size 5
int queue[size] ;
int front = -1 ;
int rear = -1 ;
void enqueue()
{
    if(rear == size-1)
    {
        printf("queue is overflow.\n");
    }
    else
    {
        if(front == -1 && rear == -1)
        {
            front++ ;
        }
        int data ;
        rear++;
        printf("Enetr a data you want to insert in queue : ");
        scanf("%d",&data);
        queue[rear] = data ;
        printf("%d is inserted in queue.\n",data);
    }
}
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("%d is dequeued from queue.\n",queue[front]);
        if(front == rear)
        {
            front = rear = -1 ;
        }
        else
        {
            front++;
        }
    }
}
void dispaly()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("Queue : \n");
        for(int i = front ; i <= rear ; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
int main()
{
    int choice ;
    printf("1.enqueue \n2.dequeue \n3.display \n4.Exit\n");
    do
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                enqueue();
                break;
            case 2 :
                dequeue();
                break;
            case 3 :
                dispaly();
                break;
            case 4 :
                printf("Exitting...");
                break;
            default :
                printf("Inavlid choice, try again.\n");
        }
    } while (choice != 4);
    return 0 ;
}