#include <stdio.h>
void main()
{
    int mark ;
    char grade ;
    printf("enter your mark : ");
    scanf("%d",&mark);
    if (mark<0 || mark>100)
    {
        printf("given mark is not valid.");
    }
    if (mark > 35 && mark<=100)
    {
        if (mark>90 || mark <=100)
        {
            grade = 'A' ;

        }
        if (mark>80 && mark<=90)
        {
            grade = 'B' ;
        }
        if (mark>70 && mark<=80)
        {
            grade = 'C' ;
        }
        if (mark>35 && mark<=70)
        {
            grade = 'D' ;
        }

        switch (grade)
       {
         case 'A':
            printf("perfect");
            break;
         case 'B':
            printf("very good ");
            break;
         case 'C':
            printf("good");
            break;
         case 'D':
            printf("not bed");
            break;
       }
    } 
    else
    {
       if (mark<= 35)
       {
         grade = 'F' ;
       }
       switch(grade)
       {
         case 'F':
            printf("you are fail.");
            break;
       }
    }   
}       