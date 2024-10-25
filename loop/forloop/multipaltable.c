#include <stdio.h>
void main() {
    int start, end;
    printf("Enter start : ");
    scanf("%d", &start);

    printf("Enter end : ");
    scanf("%d", &end);

    int ans;
    if(start<end)
    {
         for (int num1 = start; num1 <= end; num1++) 
        {
            for (int num2 = 1; num2 <= 10; num2++) 
            {
                printf("%d X %d = %d \n", num1, num2, num1 * num2);
            }
            printf("\n---------------\n");
            start++;
        }
    }
    else
    {
         for (int num1 = start; num1 >= end ; num1--)
        {
            for (int num2 = 1; num2 <= 10; num2++) 
            {
                printf("%d X %d = %d \n", num1, num2, num1 * num2);
            }
            printf("\n---------------\n");
            start++;    
        }
    } 
}