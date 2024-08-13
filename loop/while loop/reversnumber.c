#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int rnum = 0;
    int lastdigit ;
    while (num != 0)
    { 
        lastdigit = num % 10; 
        rnum = rnum *10 + lastdigit ; 
        num /= 10;
    }
    printf("%d ", rnum);
}