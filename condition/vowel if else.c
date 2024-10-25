#include <stdio.h>
void main()
{
     char alphabet ;
     printf("enter a alphabet : ");
     scanf("%c",&alphabet);

     int flag = 0 ;
     if (alphabet ==  'a')
     {
        flag = 1 ;
     }
     if (alphabet ==  'e')
     {
        flag = 1 ;
     }
     if (alphabet ==  'i')
     {
        flag = 1 ;
     }
     if (alphabet ==  'o')
     {
        flag = 1 ;
     }
     if (alphabet ==  'u')
     {
        flag = 1 ;
     }
     if (alphabet == 'A')
     {
        flag = 1 ;
     }
     if (alphabet ==  'E')
     {
        flag = 1 ;
     }
     if (alphabet ==  'I')
     {
        flag = 1 ;
     }
     if (alphabet ==  'O')
     {
        flag = 1 ;
     }
     if (alphabet == 'U')
     {
        flag = 1 ;
     } 

     if(flag == 1)
     {
        printf("given alphabet is vowel.");
     }
     else
     {
        printf("given alphabet is consonant.");
     }

}