//
// Created by siusl on 11/9/2023.
//
#include <iostream>
#include <string>

using namespace std;


//functions
//FUNCTIONS
void display_game_state_initial(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon); //initial game
// state
int get_player_move(string player_name);

void display_game_state_playing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon);

int random_number(int min, int max);

void write_game_state(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon, ofstream &out);



