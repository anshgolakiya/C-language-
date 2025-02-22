#include <stdio.h>
#include <math.h>
int main()
{
    int s ,a ,b ,c ;
    printf("enter a value of s : ");
    scanf("%d",&s);
    printf("enter a value of a : ");
    scanf("%d",&a);
    printf("enter a value of b : ");
    scanf("%d",&b);
    printf("enter a value of c : ");
    scanf("%d",&c);

    int pro = (s-a)+(s-b)+(s-c);
    int area = sqrt(pro);
    printf("%d",area);         
    


}