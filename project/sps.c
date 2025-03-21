#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
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