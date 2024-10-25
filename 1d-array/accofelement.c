#include <stdio.h>
#include <stdbool.h>
bool isprime(int num) {
    
    for (int i = 2; i * i <= num; i ++) {
        if (num % i == 0 ){
            return false;
        }
    }
    return true;
}
int countprime( int arr[] , int size )
{
    int count = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        if(isprime(arr[i]))
        {
            count++ ;
        }
    }
    return count ;
}

int main() {
    int num ; 
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Prime numbers in the array:");
        
            printf("%d\n", countprime(arr,size));
        
    

    return 0;
}
