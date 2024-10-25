#include <stdio.h>
int main() {
    
    int rows ;
    int cols ;
    printf("enter a number : ");
    scanf("%d",&rows);
    printf("enter a number : ");
    scanf("%d",&cols);
    int array[rows][cols];
    int evennumber = 0 ;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            array[i][j] = evennumber ;
            evennumber += 2 ; 
        }
    }
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%.2d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
