/*
    A text file holds information about a softball team. Each line has data arranged as
        follows:
    4 Jessie Joybat 5 2 1 1
        The first item is the player’s number, conveniently in the range 0–18. The second item
        is the player’s first name, and the third is the player’s last name. Each name is a single
        word. The next item is the player’s official times at bat, followed by the number of hits,
        walks, and runs batted in (RBIs). The file may contain data for more than one game,
        so the same player may have more than one line of data, and there may be data for
        other players between those lines. Write a program that stores the data into an array of
        structures. The structure should have members to represent the first and last names, the
        at bats, hits, walks, and RBIs (runs batted in), and the batting average (to be calculated
        later). You can use the player number as an array index. The program should read to end-
        of-file, and it should keep cumulative totals for each player.
        The world of baseball statistics is an involved one. For example, a walk or reaching base
        on an error doesn’t count as an at-bat but could possibly produce an RBI. But all this
        program has to do is read and process the data file, as described next, without worrying
        about how realistic the data is.
        The simplest way for the program to proceed is to initialize the structure contents to
        zeros, read the file data into temporary variables, and then add them to the contents of
        the corresponding structure. After the program has finished reading the file, it should
        then calculate the batting average for each player and store it in the corresponding
        structure member. The batting average is calculated by dividing the cumulative number
        of hits for a player by the cumulative number of at-bats; it should be a floating-point
        calculation. The program should then display the cumulative data for each player along
        with a line showing the combined statistics for the entire team.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXP 19

typedef char String[50];
typedef struct Player{
    String first_name;
    String last_name;
    int times_at_bat;
    int nr_of_hits;
    int nr_of_walks;
    int RBI;
    double batting_average;
} BBPlayer;

void init_Team(BBPlayer team[]);


int main(void){
    BBPlayer team[MAXP];
    team[0].first_name[0] = '\0';

    init_Team(team);
    FILE *pft = NULL;
    if(!(pft = fopen("team.txt", "r"))){
        fprintf(stderr, "Unable to open [team.txt] file\n");
        exit(EXIT_FAILURE);
    }

    String first,
            last;
    int ind,
        tab,
        noh,
        now;
    double rbi;
    while(!feof(pft)){
        fscanf(pft, "%d %s %s %d %d %d %d", &ind, first, last, &tab, &noh, &now, &rbi);
        if(ind < 0 || ind > 18){
            fprintf(stderr, "Too many players for a team!\n");
            exit(EXIT_FAILURE);
        }
        if(!strlen(team[ind].first_name)){
            strcpy(team[ind].first_name, first);
            strcpy(team[ind].last_name, last);
            team[ind].times_at_bat = tab;
            team[ind].nr_of_hits = noh;
            team[ind].nr_of_walks = now;
        } else{
            team[ind].times_at_bat += tab;
            team[ind].nr_of_hits += noh;
            team[ind].nr_of_walks += now;
        }
    }
    fclose(pft);
    
    for(int i = 0; i < MAXP; ++i){
        if(strlen(team[i].first_name)){
            team[i].batting_average = team[i].nr_of_hits / team[i].times_at_bat;
        }
    }


    return 0;
}


void init_Team(BBPlayer team[]){
    for(int i = 0 ; i < MAXP; ++i){
        team[i].first_name[0] = team[i].last_name[0] = '\0';
        team[i].times_at_bat = team[i].nr_of_hits = team[i].nr_of_walks 
                        = team[i].RBI = team[i].batting_average = 0;
    }
}