#include <stdio.h>
#define size 5
int queue[size];
int front = -1 ;
int rear = -1 ;
void enqueue(int num)
{
    if((rear + 1) % size == front)
    {
        printf("queue is full.\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0 ;
        queue[rear] = num ;
    }
    else
    {
        rear = (rear + 1) % size ;
        queue[rear] = num ;
    }
}
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else if(front == rear)
    {
        printf("%d is dequeued from queue.\n",queue[front]);
        front = rear = -1 ;
    }
    else
    {
        printf("%d is dequeued from queue.\n",queue[front]);
        front = (front + 1) % size ;
    }
}
void display()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue id empty.\n");
    }
    else
    {
        int i = front ;
        printf("Queue : \n");
        while(i != rear)
        {
            printf("%d ",queue[i]);
            i = (i + 1) % size ;
        }
        printf("%d\n",queue[rear]);
    }
}
int main()
{
    int choice , num ;
    printf("1. enqueue \n2. dequeue \n3. dispaly \n4. exit \n");
    do
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("Enter a number you want to inset in queue :");
                scanf("%d",&num);
                enqueue(num);
                break ;
            case 2 :
                dequeue();
                break;
            case 3 :
                display();
                break;
            case 4 :
                printf("Exitting...");
                break;
            default :
                printf("Invalid choice , try again.\n");
                break;
        }
    } while (choice != 4);
}