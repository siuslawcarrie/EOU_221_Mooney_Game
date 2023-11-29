//
// Created by siusl on 11/9/2023.
//

#ifndef EOU_221_MOONEY_GAME_FUNCTIONS_HPP
#define EOU_221_MOONEY_GAME_FUNCTIONS_HPP
//FUNCTIONS
void display_game_state(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon); //initial game
// state
int get_player_move();

void display_game_state_playing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon);

void display_game_state_writing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon);


#endif //EOU_221_MOONEY_GAME_FUNCTIONS_HPP
