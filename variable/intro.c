#include <stdio.h>
int main()
{
    printf("Fullname : golakiya ansh.\n");

    int date, month, year ;
    printf("enter a birth date : ");
    scanf("%d",&date);
    printf("enter a month : ");
    scanf("%d",&month);
    printf("enter a year : ");
    scanf("%d",&year);
    printf("date of birth : %d/%.2d/%d\n",date,month,year);

    float pre ;
    printf("enter a percentage : ");
    scanf("%f",&pre);
    printf("percentage is %.2f\n",pre);

    char grade ;
    printf("enter a grade : ");
    scanf(" %c",&grade);
    printf("grade is %c",grade);
    return 0 ;
}