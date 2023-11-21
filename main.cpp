
#include <iostream>
#include <fstream>
#include <string>
#include "program_functions.hpp"
//#include "validation_functions.hpp"

using namespace std;
//CONSTANTS
const int FIGHT = 1;
const int WEAPON = 2;
const int POTION = 3;


//FUNCTIONS
char get_player_move();
char player_move_func(char move);
int action_func(int min, int max);
void display_game_state_playing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_num, string P2_num);
void display_game_state_writing(string P1_Name, string P2_Name, int P1_Health, int P2_Health, string P1_num, string P2_num);

int main() {
    //output file open and write to it
    ofstream out;
    out.open("C:\\Users\\siusl\\CLionProjects\\EOU 221 Mooney game\\rpg-results.txt");
    string Game_Location, P1_Name, P2_Name, P1_num, P2_num;
    int P1_Health, P2_Health;
    int Min_Fight, Max_Fight, Min_Heal, Max_Heal, Min_Weapon, Max_Weapon;
    int players_turn;
    int move;
    int player = 1;
    int P1_num_potion, P2_num_potion=3;//assigns 3 to both variables here
    bool playing = true;
    //input file variables & open input file
    ifstream in;
    in.open("C:\\Users\\siusl\\CLionProjects\\EOU 221 Mooney game\\rpg-data.txt");
    if (in.good()) {
        in >> Game_Location;
        in >> P1_Name;
        in >> P1_Health;
        in >> P1_num;
        in >> P2_Name;
        in >> P2_Health;
        in >> P2_num;
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

    display_game_state(Game_Location, P1_Name, P2_Name, P1_Health, P2_Health, P1_num, P2_num); //initial game state


while ((P1_Health>0) and (P2_Health>0)) {
    // update board

    move = get_player_move();
    int P1_num;
    int P2_num;
    switch(move){
        case FIGHT:
            P1_num = random_number(Min_Fight, Max_Fight);
            P2_num = random_number(Min_Fight, Max_Fight);
            if (P1_num > P2_num)
                {
                    P2_Health = P2_Health - (P1_num - P2_num);
                }
            else {
                    P1_Health = P1_Health - (P2_num - P1_num);
                }
            break; 
        case WEAPON:
            P1_num = random_number(Min_Weapon, Max_Weapon);
            P2_num = random_number(Min_Weapon, Max_Weapon);
            if (P1_num > P2_num){
                        P2_Health -= P1_num;
                }
            else {
                P1_Health -= P2_num;
            }
            break;
        case POTION:
            P1_num = random_number(Min_Heal, Max_Heal);
                    if (player = 1 and P1_num_potion <= 3) {
                        P1_Health += P1_num;
                        P1_num_potion-=1;
                    }
                    else if (player != 1 and P2_num_potion <= 3) {
                        P2_Health += P1_num;
                        P2_num_potion-=1;
                    }
                    else {
                        cout << "Sorry, you have already used all of your potions. Turn over." << endl;
                    }

    }
    

    display_game_state_playing(P1_Name, P2_Name, P1_Health, P2_Health, P1_num, P2_num);



//// check for win
//if (P1_Health <= 0) {
//cout << "Congratulations " << P2_Name << " you win!" <<
//endl;
//P2_score+1;
//}
//else if (P2_Health <= 0) {
//    cout << "Congratulations " << P1_Name << " you win!" <<
//         endl;
//    P1_score += 1;
//}cout<<"Scoreboard:"<<endl;
//cout<<P1_Name<< " : P1_score"<<endl;
//cout<<P2_Name<<" : P2_score"<<endl;
//}
//else {
}

// swap player number
player = (player == 1) ? 2 : 1;//put inside loop
    out.close();
    //close read file here

return 0;
}
