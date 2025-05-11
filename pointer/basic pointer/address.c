#include <stdio.h>
int main()
{
    int num = 5 ;
    int *ptr = &num ;
    printf("address of num : %p",ptr);
    printf("\naddress of num : %p",&num);
    printf("\nvalue of num : %d",*ptr);
    printf("\nvalue of num : %d",num);
    printf("\naddress of ptr : %u",&ptr);
    printf("\nvalue of ptr : %u",*ptr);
    return 0 ;
}