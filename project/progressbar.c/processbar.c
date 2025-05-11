#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

typedef struct 
{
    int id ;
    int progress ;
    int step ;
}Task ;

const int BAR_LENGHT = 50;
const int MAX_TASKS = 10 ;
const char *BLUE = "\033[1;34m";
const char *COLOR_END = "\033[1;0m";

void print_bar(Task task) ;
void update_task(Task tasks[]) ;
void clear_screen();
void fill_tasks(Task tasks[]);

int main()
{
    Task tasks[MAX_TASKS] ;
    fill_tasks(tasks) ;
    int tasks_incompelete = 1 ;
    while(tasks_incompelete)
    {
        tasks_incompelete = 0 ;
        clear_screen() ;
        update_task(tasks) ;
        for(int i = 0 ; i < MAX_TASKS ; i++)
        {
            if(tasks[i].progress > 100)
            {
                tasks[i].progress = 100 ;
            }
            else if(tasks[i].progress < 100)
            {
                tasks_incompelete = 1 ;
            }
            print_bar(tasks[i]) ;
        }
          sleep(1) ;
    }printf("All tasks are completed\n");
    return 0 ;
}
void update_task(Task tasks[])
{
    for(int i = 0 ; i < MAX_TASKS ; i++)
    {
            tasks[i].progress += tasks[i].step ;
    }
}
void fill_tasks(Task tasks[])
{
    srand(time(NULL));
    for(int i = 0 ; i < MAX_TASKS ; i++)
    {
        tasks[i].id = i+1 ;
        tasks[i].progress = 0 ;
        tasks[i].step = rand() % 10 + 1 ;
    }
}
void clear_screen()
{
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}
void print_bar(Task task)
{
    
    int bar_to_show = (task.progress * BAR_LENGHT) / 100 ;
    printf("%sTask : %d [",BLUE,task.id) ;
    for(int i = 0 ; i < BAR_LENGHT ; i++)
    {
        if(i < bar_to_show)
        {
            printf("=");
        }
        else
        {
            printf(" ");
        }
    }
    printf("] %d%%\n%s",task.progress,COLOR_END);
}