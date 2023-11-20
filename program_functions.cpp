#include "program_functions.hpp"
#include "validation_functions.hpp"

void display_game_state(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon) {
    cout << "Welcome to Mooney Game!" <<
         endl;
    cout << "Each player will take turns choosing to fight, use weapon, or drink a health potion." <<
         endl;
    cout << "Game location today is " << Game_Location << "." << endl;
    cout << "Playing today is our hero " << P1_Name << "." << endl;
    cout << P1_Name << "'s health is: " << P1_Health << " and weapon is a " << P1_Weapon <<
         endl;
    cout << " And our challenger today is " << P2_Name << "." <<
         endl;
    cout << P2_Name << "'s health is: " << P2_Health << " and weapon is a " << P2_Weapon << "." <<
         endl << endl;
}

void display_game_state_playing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon) {
    cout << P1_Name << "'s health is: " << P1_Health << " and weapon is a " << P1_Weapon <<
         endl;
    cout << P2_Name << "'s health is: " << P2_Health << " and weapon is a " << P2_Weapon <<
         endl;
}



void write_game_state(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon, ofstream) {
    ofstream write_game_state;
    write_game_state.open("rpg-data.txt");
    if (write_game_state.good()) { // Make sure the file was opened properly
        write_game_state << cout << P1_Name << "'s health is: " << P1_Health << " and weapon is a " << P1_Weapon <<
                         endl;
        cout << P2_Name << "'s health is: " << P2_Health << " and weapon is a " << P2_Weapon <<
             endl;
        write_game_state.close();
    }
    else {
        cout << "Unable to write to the file \"rpg_data.txt\"" << endl;
    }

//get player move
    char get_player_move() {
        char move;
        cout << "Your turn! Would you like to fight - enter 1, weapon - enter 2, drink a health potion - enter 3: ";
        cin >> move;
        return move = validation_integer();
    }

//player move disposition
    char player_move_func(int Min_Fight, int Max_Fight, int Min_Weapon, int Max_Weapon, int Min_Heal, int Max_Heal) {
        if (move == 1) {
            P1_fight = random_number(Min_Fight, Max_Fight);
            P2_fight = random_number(Min_Fight, Max_Fight);
            if (P1_fight > P2_fight) { ;
                {
                    P2_Health = P2_Health - (P1_fight - P2_fight);
                }
                else {
                    P1_Health = P1_Health - (P2_fight - P1_fight);
                }
                else if (move == 2) {
                    P1_Weapon = random_number(Min_Weapon, Max_Weapon);
                    P2_Weapon = random_number(Min_Weapon, Max_Weapon);
                    if P1_Weapon > P2_Weapon{
                                P2_Health -= P1_Weapon;
                        }
                    else {
                        P1_Health -= P2_Weapon;
                    }

                }
                else {
                    heal = random_number(Min_Heal, Max_Heal);
                    if (player_turn = 1 and P1_num_potion <= 3) {
                        P1_Health += heal;
                    }
                    else if (player_turn != 1 and P2_num_potion <= 3) {
                        P2_Health += heal;
                    }
                    else {
                        cout << "Sorry, you have already used all of your potions. Turn over." << endl;
                    }

                }
            }
        }


    }

    int random_number(int min, int max) {
        {
            srand((unsigned) time(nullptr));
            int number = rand();
            max % min + 1;
            return number;

        }
    }

}
