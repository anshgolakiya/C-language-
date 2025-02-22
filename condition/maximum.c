#include <stdio.h>
int main()
{
    int num1 , num2 , num3 ;
    
    printf("enter a number 1 : ");
    scanf("%d",&num1);
    printf("enter a number 2 : ");
    scanf("%d",&num2);
    printf("enter a number 3 : ");
    scanf("%d",&num3);
    // if(a>b && a>c)        
    //     largest=a;
    // else if(b>a && b>c)       
    //     largest=b;
    // else 
    //     largest=c;
    if(num1 > num2)
    {                  
        if(num1>num3)
        {
            printf("minimum number is %d",num1);
        }
        else
        {
            printf("minimum number is %d",num3);
        }
    }
    else
    {
        if(num2 > num3)
        {
            printf("minimum number is %d",num2);
        }
        else
        {
            printf("minimum number is %d",num3);
        }
    }
   

    return 0 ;
}