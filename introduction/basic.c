#include <stdio.h>
int main()
{
    printf("Full name : Golakiya Ansh C. \n");

    int date , month , year ;
    printf("enter brith date : ");
    scanf("%d",&date);
    printf("enter brith  month : ");
    scanf("%d",&month);
    printf("enter a brith year : ");
    scanf("%d",&year);

    printf("DOB : %d / %.2d / %d",date,month,year);
}