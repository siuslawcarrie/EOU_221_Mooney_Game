
#include <iostream>
#include <fstream>
#include <string>
#include "program_functions.hpp"
#include "validation_functions.hpp"

using namespace std;

// define constants
const int MAX_HEALTH = 3;
const int BIG_NUM = 100;
const char EOL = '\n';

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
    //variables for testing
//    string Game_Location = "Planet Mooney";
//    string P1_Name = "Athena";
//    int P1_Health = 100;
//    string P1_Weapon = "Gladius";
//    string P2_Name = "Hera";
//    int P2_Health = 90;
//    string P2_Weapon = "Staff";
//    int Min_Fight = 10;
//    int Max_Fight = 20;
//    int Min_Weapon = 20;
//    int Max_Weapon = 40;
//    int Min_Heal = 5;
//    int Max_Heal = 10;


// variables from input file
    cout << "Welcome to Mooney Game!" <<
         endl;
    cout << "Each player will take turns choosing to fight, use weapon, or drink a health potion." <<
         endl;
    cout << "Game location today is " << Game_Location << "."<<endl;
    cout << "Playing today is our hero " << P1_Name << "." <<endl;
    cout << P1_Name<<"'s health is: " << P1_Health << " and weapon is a " << P1_Weapon <<
         endl;
    cout << " And our challenger today is " << P2_Name << "." <<
         endl;
    cout <<P2_Name<< "'s health is: " << P2_Health << " and weapon is a " << P2_Weapon << "." <<
         endl<<endl;
//move function



//    while (playing) {
//// display board and get move
//        cout << "Player " << player << ", it's your turn!" << endl <<
//             endl;
//        cout << "The game currently looks like this:";
//        void display_game_state(Game_Location, P1_Name, P2_Name, P1_Health, P2_Health);
//
//        void write_game_state(Game_Location, P1_Name, P2_Name, P1_Health, P2_Health, ofstream out);
//        cout << endl <<
//             endl;
//
//        cout << "Which option ? (1-fight, 2-weapon, or 3-health potion) ";
//        cin >>
//            move;
//
//// validate move
//        do {
//// if illegal move, delete and start over
//            if ((!cin) or (move != 1 or move != 2 or move != 3)) {
//                cout << "Invalid move, try again ";
//// clear buffer for new move
//                cin.
//
//                        clear();
//
//                cin.
//                        ignore(BIG_NUM, EOL
//                );
//// get new move
//                cin >>
//                    move;
//            }
//        } while (move == 1 or move == 2 or move == 3);
//
//// update board
//
//
//// check for win
//        if (P1_Health <= 0) {
//            cout << "Congratulations " << P2_Name << " you win!" <<
//                 endl;
//        }
//        else {
//            cout << "Congratulations " << P1_Name << " you win!" <<
//                 endl;
//            playing = false;
//        }
//
//// swap player number
//        player = (player == 1) ? 2 : 1;


    return 0;
}
