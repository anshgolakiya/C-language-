#include <stdio.h>
int main()
{
    int month ;
    printf("enter a month : ");
    scanf("%d",&month);
    switch (month)
    {
    case '4':
    case '6':
    case '9':
    case '11':
        printf("days = 30");
        break;
    case '1':
    case '3':
    case '5':
    case '7':
    case '8':
    case '10':
    case '12':
        printf("days = 31");
    case '2':
        printf("days = 28");
    default:
        printf("please enter a valid month");
        break;
    }
}