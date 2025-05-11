//use of exit => to  stop a program immediately if a critical error occurs.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp ;
    fp = fopen("Text.txt","r");
    if(fp == NULL)
    {
        printf("Error : could not open file.\n");
        exit(1);
    }
    printf("File opened successfull.\n");
    
    return 0 ;
}