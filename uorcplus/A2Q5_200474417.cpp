
// /**
// Student Name: Oluwaseun Ayeni

// Student Number: 200474417

// Assignment Number: CS-110 A2Q5

// Program Name: Rocky_game (A2Q5_200474417.cpp)

// Last Modified: 15/02/2024

// ------ Problem Statement -----
// This C++ program is about the famous  scissor,rock and paper  game.  It depends on the game rules.
 
//  ------ Input and Output ------
//  Input: Choices(0,1,2)
//  Output: Winner
 
//  ------ Major Variables -------
//  choices -> Store the choices  to be compared

//  ----- Program Limitation -----
//  This program exit when a winner is found
//  */

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() {
//     // Seed the random number generator
//     srand(static_cast<unsigned int>(time(0)));

//     // Declare an array that store our choices
//     string choices[] = {"scissor", "rock", "paper"};

//     // Generate a random number for computer's choice(modulo 3 ensures that the number generated is from the range of 0-2 )
//     int computerChoice = rand() % 3;

//     // Prompt the user to enter their choice
//     cout << "Enter your choice (0 for scissor, 1 for rock, 2 for paper): ";
//     int userChoice;
//     cin >> userChoice;

//     // Display the computer's choice
//     cout << "Computer's choice: " << choices[computerChoice] << endl;

//     // Determine the winner by comparing user's input with computer's input
//     if (userChoice == computerChoice) {
//         cout << "It's a draw!" << endl;
//     } else if ((userChoice == 0 && computerChoice == 2) ||
//                (userChoice == 1 && computerChoice == 0) ||
//                (userChoice == 2 && computerChoice == 1)) {
//         cout << "You win!" << endl;
//     } else {
//         cout << "Computer wins!" << endl;
//     }

//     return 0;
// }

//End program
