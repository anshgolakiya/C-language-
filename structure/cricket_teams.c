#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 4 
#define MAX_TEAMS 2
#define NAME_LENGTH 50 

struct cricket {
    char player_name[NAME_LENGTH];
    char team_name[NAME_LENGTH];
    float batting_average;
};

int main()
{
    struct cricket players[MAX_PLAYERS];
    char tearms[MAX_TEAMS][NAME_LENGTH];
    int team_count = 0 ;

    printf("Enter the details of 50 players:\n");
    for(int i = 0 ; i < MAX_PLAYERS ; i++)
    {
        printf("Player %d :\n",i+1);

        printf("Name : ");
        scanf("%s", players[i].player_name);
        printf("Team : ");
        scanf("%s" , players[i].team_name);
        printf("Batting Average : ");
        scanf("%f", &players[i].batting_average);

        int exists = 0 ;
        for(int j  = 0 ; j < team_count ; j++)
        {
            if(strcmp(players[i].team_name, tearms[j]) == 0)
            {
                exists = 1 ;
                break;
            }
        }
        if(!exists && team_count < MAX_TEAMS)
        {
            strcpy(tearms[team_count], players[i].team_name);
            team_count++;
        }
    }
    printf("\n");
    printf("team wise player list : \n");
    for(int i = 0 ; i < team_count ; i++)
    {
        printf("\n Team %d : %s\n", i+1, tearms[i]);
        printf("-------------------------\n");
        for(int j = 0 ; j < MAX_PLAYERS ; j++)
        {
            if(strcmp(players[j].team_name, tearms[i]) == 0)
            {
                printf("Player Name : %s\n", players[j].player_name);
                printf("Batting Average : %.2f\n", players[j].batting_average);
            }
        }
    }
    return 0 ;
}