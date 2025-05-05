#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 6 
#define MAX_TEAM 2
#define NAME_LENGTH 50

struct cricket
{
    char player_name[NAME_LENGTH];
    char team_name[NAME_LENGTH];
    float batting_average;
}player[MAX_PLAYERS];
int main()
{
    char team_name[MAX_TEAM][NAME_LENGTH] ;
    int team_count = 0 ;

    for(int i = 0 ; i < MAX_PLAYERS ; i++)
    {
        printf("Enter player name : ");
        scanf("%s",player[i].player_name);
        printf("Enter a team name : ");
        scanf("%s",player[i].team_name);
        printf("Enter batting average : ");
        scanf("%f",&player[i].batting_average);
        
        int exists = 0 ;
        for(int j = 0 ;  j < team_count ; j++)
        {
            if(strcmp(team_name[j],player[i].team_name) == 0)
            {
                exists = 1 ;
                break;
            }
        }
        if(!exists && team_count < MAX_TEAM)
        {
            strcpy(team_name[team_count],player[i].team_name);
            team_count++ ;
        }
    }
    printf("\nTeam wise players list : \n");
    for(int i = 0 ; i < team_count ; i++)
    {
        printf("\nTeam number %d : %s\n",i+1,team_name[i]);
        printf("-------------------------\n");
        for(int j = 0 ; j < MAX_PLAYERS ; j++)
        {
            if(strcmp(player[j].team_name,team_name[i]) == 0)
            {
                printf("Player name : %s\n",player[j].player_name);
                printf("Batting average : %.2f\n",player[j].batting_average);
            }
        }
    }
    return 0 ;
}