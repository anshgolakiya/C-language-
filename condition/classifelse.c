#include <stdio.h>
int main()
{
    int mark ;

    printf("enter your mark : ");
    scanf("%d",&mark);

    if(mark >= 80 && mark <= 100)
    {
        printf("distinction");
    }
    else if (mark >= 60 && mark < 80)
    {
        printf("frist class");
    }
    else if (mark >= 35 && mark < 60)
    {
        printf("second class");
    }
    else 
    {
        printf("student fail");
    }
    return 0;
}
