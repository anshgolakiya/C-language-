#include <stdio.h>
void main()
{
    int mark ;
    printf("enter your mark : ");
    scanf("%d",&mark);

    if (mark>= 80 && mark<=100)
    {
        printf("distinction.");
    }
   else if (mark>=60 && mark<=79)
    {
        printf("frist class");
    }
    else if (mark>=40 && mark<=59)
    {
        printf("second class");
    }
    else
    {
        printf("fail");
    }
}