
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "program_functions.h"


using namespace std;
//CONSTANTS
const int FIGHT = 1;
const int WEAPON = 2;
const int POTION = 3;


int main() {
    //output file open and write to it
    ofstream out;
    out.open("C:\\Users\\siusl\\CLionProjects\\EOU 221 Mooney game\\rpg-results.txt");
    string Game_Location, P1_Name, P2_Name, P1_Weapon, P2_Weapon;
    int P1_Health, P2_Health;
    int Min_Fight, Max_Fight, Min_Heal, Max_Heal, Min_Weapon, Max_Weapon;
    int P1_score, P2_score;
    int move;
    int player = 1;
    int P1_num_potion = 3, P2_num_potion = 3;
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
    } else {
        cout << "Could not read file";
        return -1;
    }
    display_game_state_initial(Game_Location, P1_Name, P2_Name, P1_Health, P2_Health, P1_Weapon, P2_Weapon);

//GAME LOOP
    while ((P1_Health > 0) and (P2_Health > 0)) {
        // update board
        move = get_player_move(player==1 ? P1_Name: P2_Name);//ternary operator, no parameter needed for declaration & definition, main passes in the result of the ternary expression into function get player move.
        int P1_num;
        int P2_num;
        switch (move) {
            case FIGHT:
                P1_num = random_number(Min_Fight, Max_Fight);
                P2_num = random_number(Min_Fight, Max_Fight);
                if (P1_num > P2_num) {
                    P2_Health = P2_Health - (P1_num - P2_num);
                } else {
                    P1_Health = P1_Health - (P2_num - P1_num);
                }
                break;
            case WEAPON:
                P1_num = random_number(Min_Weapon, Max_Weapon);
                P2_num = random_number(Min_Weapon, Max_Weapon);
                if (P1_num > P2_num) {
                    P2_Health -= P1_num;
                } else {
                    P1_Health -= P2_num;
                }
                break;
            case POTION:
                P1_num = random_number(Min_Heal, Max_Heal);
                if (player == 1 and P1_num_potion > 0) {
                    P1_Health += P1_num;
                    P1_num_potion -= 1;
                } else if (player != 1 and P2_num_potion > 0) {
                    P2_Health += P1_num;
                    P2_num_potion -= 1;
                } else {
                    cout << "Sorry, you have already used all of your potions. Turn over." << endl;
                }

        }


        display_game_state_playing(P1_Name, P2_Name, P1_Health, P2_Health, P1_Weapon, P2_Weapon);
        write_game_state(Game_Location, P1_Name, P2_Name, P1_Health, P2_Health, P1_Weapon, P2_Weapon,
                         out);//out - variable //ofstream is type //stream cannot be passed as a value, has to be passed by reference.

// check for win
        if (P1_Health <= 0) {
            cout << "Congratulations " << P2_Name << " you win!" <<
                 endl;
//            P2_score += 1;
        } else if (P2_Health <= 0) {
            cout << "Congratulations " << P1_Name << " you win!" <<
                 endl;
//            P1_score += 1;

//            cout << "Scoreboard:" << endl;
//            cout << P1_Name << " : P1_score" << endl;
//            cout << P2_Name << " : P2_score" << endl;
        } else {
            player = (player == 1) ? 2 : 1;//ternary operator ? takes 3 parameters - condition: player == 1, ?, true : false
            // }   swap
            //    player number
            //put inside loop
        }
        //out.close();
//    //close read file here
    }
    return 0;

}