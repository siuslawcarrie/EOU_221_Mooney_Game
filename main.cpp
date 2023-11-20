
#include <iostream>
#include <fstream>
#include <string>
#include "program_functions.hpp"
//#include "validation_functions.hpp"

using namespace std;

//// define constants
//const int MAX_HEALTH = 3;
//const int BIG_NUM = 100;
//const char EOL = '\n';

//FUNCTIONS
char get_player_move();
char player_move_func(char move);
int action_func(int min, int max);
void display_game_state_playing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_Weapon, string P2_Weapon);


int main() {
    //output file open and write to it
    ofstream out;
    out.open("C:\\Users\\siusl\\CLionProjects\\EOU 221 Mooney game\\rpg-results.txt");
    string Game_Location, P1_Name, P2_Name, P1_Weapon, P2_Weapon;
    int P1_Health, P2_Health;
    int Min_Fight, Max_Fight, Min_Heal, Max_Heal, Min_Weapon, Max_Weapon;
    int players_turn;
    int move;
    int player = 1;
    bool playing = true;
    //input file variables & open input file
    ifstream in;
    in.open("C:\\Users\\siusl\\CLionProjects\\EOU 221 Mooney game\\rpg-data.txt");
    if (in.good()) {
        in >> Game_Location;
        in >> P1_Name;
        in >> P1_Health;
        in >> P1_Weapon;
        in >> P2_Name;
        in >> P2_Health;
        in >> P2_Weapon;
        in >> Min_Fight;
        in >> Max_Fight;
        in >> Min_Weapon;
        in >> Max_Weapon;
        in >> Min_Heal;
        in >> Max_Heal;
    }
    else {
        cout << "Could not read file";
        return -1;
    }

    display_game_state(Game_Location, P1_Name, P2_Name, P1_Health, P2_Health, P1_Weapon, P2_Weapon); //initial game state



playing = true;

while (playing = true){
    // update board
    move = get_player_move();

    display_game_state_playing(P1_Name, P2_Name, P1_Health, P2_Health, P1_Weapon, P2_Weapon);



// check for win
if (P1_Health <= 0) {
cout << "Congratulations " << P2_Name << " you win!" <<
endl;
playing = false;
}
else if (P2_Health <= 0) {
cout << "Congratulations " << P1_Name << " you win!" <<
endl;
playing = false;
}
else {
playing = true
}

// swap player number
player = (player == 1) ? 2 : 1;


return 0;
}
