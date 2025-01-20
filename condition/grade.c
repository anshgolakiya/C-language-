#include <stdio.h>
int main()
{
    char grade ;

    printf("enter your grade : ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("PREFECT");
        break;
    case 'B':
        printf("VERY GOOOD");
        break;
    case 'C':
        printf("GODD");
        break;
    case 'D' :
        printf("BED");
        break;
    case 'E': 
        printf("FAIL");
        break;
    }
    return 0 ;
}