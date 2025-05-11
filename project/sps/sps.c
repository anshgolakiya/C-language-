#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

typedef struct 
{
    int id ;
    int progress ;
    int step ;
}Task ;

const int BAR_LENGHT = 50;
const int MAX_TASKS = 1 ;
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
    }
    printf("STONE PAPER SCISSOR GAME\n");
    printf("press 1 for stone \npress 2 for paper /npress 3 for scissor.\n");
    printf("Game is in 5 level , lets start.\n");
    int Player_Score = 0 ;
    int Computer_Score = 0 ;
    int Player_choice , Computer_choice;
    srand(time(NULL));
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("\nEnter a your choice : ");
        scanf("%d",&Player_choice);
        Computer_choice = (rand()%3) + 1 ;

        if(Player_choice == 1)
        {
            if(Computer_choice == 1)
            {
                printf("Player choose stone and computer choose stone.\n");
                printf("\tDraw\n");
            }
            else if(Computer_choice == 2)
            {
                printf("Player choose stone and computer choosen paper.\n");
                printf("\tComputer wins\n");
                Computer_Score++ ;
            }
            else
            {
                printf("Player choose stone and computer choose scissor.\n");
                printf("\tPlayer wins\n");
                Player_Score++;
            }
        }
        else if(Player_choice == 2)
        {
            if(Computer_choice == 1)
            {
                printf("Player choose paper and computer choose stone.\n");
                printf("\tplayer wins\n");
                Player_Score++;
            }
            else if(Computer_choice == 2)
            {
                printf("Player choose paper and computer choosen paper.\n");
                printf("\tDraw\n");
            }
            else
            {
                printf("Player choose paper and computer choose scissor.\n");
                printf("\tComputer wins\n");
                Computer_Score++;
            }
        }
        else if(Player_choice == 3)
        {
            if(Computer_choice == 1)
            {
                printf("Player choose scissor and computer choose stone.\n");
                printf("\tComputer wins\n");
                Computer_Score++;
            }
            else if(Computer_choice == 2)
            {
                printf("Player choose scissor and computer choosen paper.\n");
                printf("\tplayer wins\n");
                Player_Score++;
            }
            else
            {
                printf("Player choose scissor and computer choose scissor.\n");
                printf("\tDraw\n");
            }
        }
        else
        {
            printf("your choice is wrong.");
        }
        printf("\n\tplayer score : %d , Computer score ; %d",Player_Score,Computer_choice);
    
    }
    printf("\n");
    if(Computer_Score > Player_Score)
    {
        printf("\n\tComputer wins %d to %d",Computer_Score,Player_Score);
    }
    else if(Computer_Score < Player_Score)
    {
        printf("\n\tPlayer wins %d to %d",Player_Score,Computer_Score);
    }
    else if(Computer_Score = Player_Score)
    {
        printf("\n\tNo winner , Match Draw");
    }
    getch() ;
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