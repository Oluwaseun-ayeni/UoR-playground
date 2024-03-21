// //
// //  Alphabet.cpp
// //  uorcplus
// //
// //  Created by Oluwaseun Ayeni on 2024-02-12.
// //

// /**
// Student Name: Oluwaseun Ayeni

// Student Number: 200474417

// Assignment Number: CS-110 A2Q1

// Program Name: Letter deriv(A2Q1_200474417.cpp)

// Last Modified: 15/02/2024

// ------ Problem Statement -----
// This C++ program reads user input and loop through array of vowel to check if  the input is vowel or consonant

 
//  ------ Major Variables -------
//  vowel-> Array that consists of the vowels
//  isVowel -> Sets the boolean condition for the program

//  ----- Program Limitation -----
//  This program only checks the first alphabet user input ,  i.e Input = Sides,  Program picks first index (S)
//  */

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
    
//     // Declares an array of 5 elements to store our input
//     string vowel[5] = {"a", "e", "i", "o", "u"};
    
//     //Takes in user input
//     string n;
//     cout << "Enter a letter: ";
//     cin >> n;
    
//     // Extract the first character from the input string
//     char ch = n[0];
    
//     // Check if the character is an uppercase or lowercase alphabet
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
//         // Convert the character to lowercase if it is uppercase
//         if (ch >= 'A' && ch <= 'Z') {
//             ch += ('a' - 'A'); // Convert to lowercase by adding the difference between 'a' and 'A'
//         }
        
//         // set the condition to false
//         bool isVowel = false;
        
//         //--Loop through our array --
//         for (int i = 0; i < 5; i++) {
            
//             // check if element at each index matches in the array matches the user input
//             if (vowel[i] == n) {
                
//                 // If element matches input then we set our boolean condition to true
//                 isVowel = true;
                
//                 //Print out our output
//                 cout << "The letter you entered is a vowel" << endl;
//                 break;  // Once a vowel is found, exit the loop
//             }
            
//         }
//         //Execute this condition if the letter is not a vowel
//         if (!isVowel) {
//             cout << "The letter you entered is a consonant" << endl;
//         }
        
//         return 0;
//     }
    
//     // Print Invalid output if user's input is not an alphabet
//     else
//         cout << "Invalid output" << endl;
// }

// //End program.
