#include <stdio.h>
int main()
{
    int num1 , num2 ;
    printf("enter a num1 : ") ;
    scanf("%d" , &num1) ;
    printf("enter a num2 : ") ;
    scanf("%d" , &num2) ;

    void swap(int *num1 , int *num2) ;
    swap(&num1 , &num2) ;
    printf("num1 = %d , num2 = %d\n" , num1 , num2) ;
    return 0 ;
}
void swap(int *num1 , int *num2)
{
    int temp = *num1 ;
    *num1 = *num2 ;
    *num2 = temp ;

}