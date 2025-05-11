#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

const char *RED = "\033[3;31m";
const char *COLOR_END = "\033[0;0m";

void fill_time(char *buffer , int format) ;
void clear_screen();
int input_format() ;
void fill_date(char *buffer);

int main()
{
    char time[50] , date[100] ;
    int format = input_format() ;
    while(1)
    {
    fill_time(time ,format) ;
    fill_date(date) ;
    clear_screen();
    printf("%sCurrent time : %s%s",RED,time,COLOR_END);
    printf("%s\nDate : %s%s",RED,date,COLOR_END);
    sleep(1) ; //sleep a loop for 1 second
    }
    return 0 ;
}
void fill_date(char *buffer)
{
    time_t raw_time ;
    struct tm *current_time ;
    time(&raw_time);
    current_time = localtime(&raw_time);
    strftime(buffer,100,"%A %d %B %Y",current_time);
}
void clear_screen()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int input_format()
{
    int format ;
    printf("\nchoosr the time format :");
    printf("\n1.24 hours format");
    printf("\n2.12 hours format");
    printf("\nEnter your choice :");
    scanf("%d",&format);
    return format ;
}
void fill_time(char *buffer , int format)
{
    time_t raw_time ;
    struct tm * current_time ;
    time(&raw_time) ;
    current_time = localtime(&raw_time);
    if(format == 1)
    {
        strftime(buffer,50,"%H:%M:%S",current_time);
    }
    else
    {
        strftime(buffer,50,"%I:%M:%S %p",current_time);
    }
}