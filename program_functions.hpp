//
// Created by siusl on 11/9/2023.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef EOU_221_MOONEY_GAME_PROGRAM_FUNCTIONS_HPP
#define EOU_221_MOONEY_GAME_PROGRAM_FUNCTIONS_HPP

#endif //EOU_221_MOONEY_GAME_PROGRAM_FUNCTIONS_HPP

//functions
//FUNCTIONS
void display_game_state(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon); //initial game
// state
int get_player_move();

void display_game_state_playing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon);

//void write_game_state(string P1_Name, string P2_Name, int P1_Health, int P2_Health, );

int random_number(int min, int max);

void write_game_state(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon, ofstream &out);



