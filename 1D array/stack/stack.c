#include <stdio.h>
const int size = 5 ;
 // Initialize top of stack
void push(int stack[],int *top) {
    if (*top >= size - 1) {
        printf("Stack overflow\n");
    } else {
        int value;
        printf("Enter value to push: ");
        scanf("%d", &value);
        stack[++(*top)] = value;
        printf("Pushed %d onto stack\n", value);
    }
}
void display(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= *top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int top = -1, choice ;
    int stack[size];
    
    printf("press 1 to push\n");
    printf("press 2 to pop\n");
    printf("press 3 to display\n");
    printf("press 4 to peek\n");
    printf("press 5 to exit\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1 :
                push(stack,&top);
                display(stack,&top);
                break;
        }
    } while (choice != 5);
    

}