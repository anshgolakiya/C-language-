 #include <stdio.h>
 void main()
 {
    int num1 ;
    int num2 ;
    printf("enter a num1 : ");
    scanf("%d",&num1);
    printf("enter a num2 : ");
    scanf("%d",&num2);
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= num2; j++)
        {
            printf(" %c", i+96);
        }
        printf("\n");
    }

 }
 