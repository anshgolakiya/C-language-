#include <stdio.h>
void main()
{

    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    printf("%d",num);
    printf("%d",num++); //* num++ means : use num and increase number 
    printf("%d",++num); //* ++num means : increase number and use new number
}