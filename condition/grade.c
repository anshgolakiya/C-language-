#include <stdio.h>
int main()
{
    char grade ;
    printf("enter a grade : ");
    scanf("%d",grade);

    switch (grade)
    {
    case 'A':
        printf("PERFECT");
        break;
    case 'B':
        printf("VERY GOOD");
        break;
    case 'C':
        printf("GOOD");
        break;
    case 'D':
        printf("BED");
        break;
    case 'F':
        printf("FAIL");
        break;
    
    default:
        printf("error : invalid grade");
        break;
    }
}