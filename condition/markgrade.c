#include <stdio.h>
int main()
{
    int mark ;

    printf("enter student mark : ");
    scanf("%d",&mark);

    if(mark <= 35 && mark >= 0)
    {
        printf("you are fail.");
        char grade = 'F' ;
        switch (grade)
        {
        case 'F':
            printf("FAIL");
            break;
        }  
    }
    if(mark > 35 && mark <= 100)
    {
        printf("you are pass.");

        char grade ;

        if(mark <= 100 && mark > 80)
        {
            grade = 'A' ;
        }
        if (mark <= 80 && mark > 60)
        {
            grade = 'B' ;
        }
        if(mark <= 60 && mark > 40)
        {
            grade = 'C';
        }
        if(mark < 35 && mark >= 40)
        {
            grade = 'D';
        }
        switch (grade)
        {
        case 'A':
            printf("PERFENT");
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
        }
    }
    return 0 ;
}