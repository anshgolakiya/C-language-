#include <stdio.h>
void main()
{
    int daynumber ;

    printf("enter number between 1 to 7 : ");
    scanf("%d",&daynumber);
    switch (daynumber)
    {
     case 'A':
        printf("sunday");
        break;
     case 'B':
        printf("monday");
        break;
     case 'C':
        printf("tuesday");
        break;
     case 'D':
        printf("wednesday");
        break;
     case 'E':
        printf("thursday");
        break;
     case 'F':
        printf("friday");
        break;
     case 'G':
        printf("saturday");
        break;
    
     default:
        printf("please give valid number.");
        break;
    }
}