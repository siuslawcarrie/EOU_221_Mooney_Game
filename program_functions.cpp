#include <fstream>
#include "program_functions.hpp"


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
//get player move
int get_player_move(string player_name) {
    int move;
    cout << "It's "<<player_name<<"'s turn. Would you like to fight - enter 1, weapon - enter 2, drink a health potion - enter 3: ";
    cin >> move;
    return move;
}

void display_game_state_playing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon) {
    cout << P1_Name << "'s health is: " << P1_Health << " and weapon is a " << P1_Weapon <<
         endl;
    cout << P2_Name << "'s health is: " << P2_Health << " and weapon is a " << P2_Weapon <<
         endl;
}

void write_game_state(string Game_Location, string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon,
                      std::ofstream &out) {
    if (out.good()) { // Make sure the file was opened properly
        out << P1_Name << "'s health is: " << P1_Health << " and weapon is a " << P1_Weapon <<
            endl;
        out << P2_Name << "'s health is: " << P2_Health << " and weapon is a " << P2_Weapon <<
            endl;

    }
    else {
        cout << "Unable to write to the file \"rpg_results.txt\"" << endl;
    }
}
    int validation_integer() { //function to validate integers
        int val_number;
        cin >> val_number;
        while (!cin) {
// Explain error not entering an integer
            cout
                    << "I'm sorry that's not a valid entry. Please enter a number" << endl;
// Clear input stream
            cin.clear();
// Discard previous input
            cin.ignore(123, '\n');
            cin >> val_number;
            cout << endl;
        }
        return val_number;
    }
//Random number function
        int random_number(int min, int max) {
            int rand_number;
// Generate a random number
            srand((unsigned) time(nullptr));
//random numbers must be between 1 & 99
            rand_number = rand() % min + 1;
            rand_number = rand() % max + 1;
            return rand_number;
//get_play_again{
//};        cout << "Would you like to play again? y/n";
//cin >> answer;
//// convert to lower case
//answer = tolower(answer);
//
//// validate response
//do {
//if ( answer != 'y' and answer != 'n')
//{
//cout << "Invalid response, must be y or n";
//// clear buffer for new response
//cin.clear();
//cin.ignore(BIG_NUM, EOL);
//// get new response
//cin >> answer;
//// convert to lower case
//answer = tolower(answer);
//}
//} while ( answer != 'y' and answer != 'n');
//}while ( answer == 'y');
//
//cout << "Nice playing with you. Goodbye!" << endl;
//
//return  0;
}
