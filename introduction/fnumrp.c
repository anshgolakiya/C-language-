#include <stdio.h>
int main()
{
    float amount ;
    printf("enter a amount : ");
    scanf("%f",&amount);
    int paisa = (amount - (int)amount)*100 ;
    printf("%d rupees %d paisa",(int)amount,paisa);
}
