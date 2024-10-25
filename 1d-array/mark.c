#include <stdio.h>
int main()
{
    int arr1 [10] = {90,48,98,78,49,15,12,48,33,89};
    for(int i = 0 ; i < 10 ; i++)
    {
        if( arr1[i] < 35 )
        {
            printf("roll number %d is fail.\n",i+1);
        }
    }

    printf("mark input a denot a fail student roll number.\n") ;
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr2[num] ;
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        if( arr2[i] < 35 )
        {
            printf("roll number %d is fail.\n",i+1);
        }
    }
    
}
