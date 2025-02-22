#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ") ;
    scanf("%d",&num);
    int decimaltobinary(int num);
    printf("given number in binary : %d",decimaltobinary(num));
    return 0 ;

}
int decimaltobinary(int num)
{
    int rem ; // remainder
    int binary= 0 ;
    for(int i =  1 ; num > 0 ; i = i * 10)
    {
        rem = num %  2 ;
        binary += rem * i ;
        num = num / 2 ;
    }
    return binary ;
}