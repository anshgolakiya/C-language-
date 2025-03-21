#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void fill_time(char *,int) ;
void fill_date(char *) ;
int input_format();
void clear_screen() ;

int main()
{
    char time[50] , date[100] ;
    int format = input_format() ;   
    while(1)
    {
    fill_time(time ,format) ;
    fill_date(date) ;
    clear_screen() ;
    printf("\n\nCurrent time is : %s",time) ;
    printf("\nDate : %s",date) ;
    sleep(1) ; // sleep for 1 second
    } 
    return 0 ;
}
void clear_screen()
{
    #ifdef _WIN32
       system("cls") ;
    #else
       system("clear") ;
    #endif

}
void fill_date(char * buffer) 
{
    time_t raw_time ;
    struct tm *current_time ;

    time(&raw_time) ;
    current_time = localtime(&raw_time) ;
    strftime(buffer,100,"%A %d %B %Y",current_time) ;
}
int input_format()
{
    int format ;
    printf("\n choose the time format ") ;
    printf("\n1.24 hour format") ;
    printf("\n2.12 hour format") ;
    printf("\n malr a choice : ") ;
    scanf("%d",&format) ;
}
void fill_time(char *buffer , int format)
{
    time_t raw_time ;
    struct tm *current_time ;

    time(&raw_time) ;
    current_time = localtime(&raw_time) ;
    if(format == 1)
    {
        strftime(buffer,50,"%H:%M:%S",current_time) ;
    }
    else
    {
        strftime(buffer,50,"%I:%M:%S %p",current_time) ;
    }
}