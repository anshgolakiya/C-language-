#include <stdio.h>
void main()
{
   int num ;

   printf("enter a number : ");
   scanf("%d",&num);

   if(num>0)
   {
     printf("given number us positive. ");
   }
   else if(num<0) 
   {
     printf(" given number is negative.");
   }
   else 
   {
     printf("given numberis zero");
   }


}
