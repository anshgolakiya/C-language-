#include <stdio.h>
int main()
{
    int num = 5 ;+
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr ;

    for(int i = 0 ; i < num; i++)
    {
        printf("arr[%d] = %d\n",i,*ptr);
        ptr++;
    }

}