//
// Created by siusl on 11/9/2023.
//
#include <iostream>
using namespace std;
#ifndef EOU_221_MOONEY_GAME_VALIDATION_FUNCTIONS_HPP
#define EOU_221_MOONEY_GAME_VALIDATION_FUNCTIONS_HPP

//MOVE TO PROGRAM FUNCTIONS CPP

#endif //EOU_221_MOONEY_GAME_VALIDATION_FUNCTIONS_HPP

int validation_integer(){ //function to validate integers
int val_number;
cin >> val_number;
while (!cin) {
// Explain error not entering an integer
cout
<< "I'm sorry that's not a valid entry. Please enter a number"<<endl;
// Clear input stream
cin.clear();
// Discard previous input
cin.ignore(123, '\n');
cin >> val_number;
cout << endl;
}
return val_number;
//Random number function
int random_number(int min, int max) {
    int rand_number;
// Generate a random number
    srand((unsigned) time(nullptr));
//random numbers must be between 1 & 99
    number = rand() % min + 1;
    number = rand() % max + 1;
    return rand_number;

//int validation_integer(){
//    int number;
//    cin >> number;
//    while (!cin or (number < min) or
//           (number > max)) {
//// Explain error not entering an integer
//        cout
//                << "I'm sorry that's not a valid entry. Please enter a number between "
//                << min << " and " << max
//                << ": ";
//// Clear input stream
//        cin.clear();
//// Discard previous input
//        cin.ignore(123, '\n');
//        cin >> number;
//        cout << endl;
//    }
//    return number;
//}

//float validation_float(float min,
//                       float max) //function to validate integers
//{
//    float number;
//    cin >> number;
//
//    while (!cin or (number < min) or
//           (number > max)) {
//// Explain error not entering an integer
//        cout
//                << "I'm sorry that's not a valid entry. Please enter a number between "
//                << min << "and " << max
//                << ": ";
//// Clear input stream
//        cin.clear();
//// Discard previous input
//        cin.ignore(123, '\n');
//        cin >> number;
//        cout << endl;
//
//    }
//    return number;
}


//}int random_number(int min, int max);
////int validation_integer(int min,
////                       int max);
////