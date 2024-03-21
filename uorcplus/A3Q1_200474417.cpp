
/**
Student Name: Oluwaseun Ayeni

Student Number: 200474417

Assignment Number: CS-110 A3Q1

Program Name: A3Q1_200474417.cpp

Last Modified: 12/03/2024

------ Problem Statement -----
This C++ program reads an unspecified number of integers, determines how many 
positive and negative values have been read, and computes the total and average of the
input values.
 
 ------ Input and Output ------
 Input: integers
 Output: positive, negative, total and average of the input values
 
 ------ Major Variables -------
 num -> Store the user input
 positive -> Store the number of positive integers
 negative -> Store the number of negative integers
 total -> Store the total of all the integers
 count -> Store the number of integers entered


 ----- Program Limitation -----
 This program exit user input is 0
 */


#include <iostream>

using namespace std;

int main() {
    
    //Declare variables that will used in the program
    int num;
    
    int positive = 0;
    
    int negative = 0;
    
    int total = 0;
    
    int count = 0;

    //Tell the user to include 0 at the end of their input
    cout << "Enter an integer, the input ends if it is 0 ";
    
    //The while loop take user input and checks if it is 0
    while (cin >> num && num != 0) {
        
        positive += (num > 0);
        negative += (num < 0);
        total += num;
        count++;
    }
    
    //Check if all the input entered is 0
    if (count == 0)
        cout << "No number is entered except 0" << endl;
    else
        cout << "The number of positives is " << positive << endl
                  << "The number of negatives is " << negative<< endl
                  << "The total is " << total << endl
                  << "The average is " << static_cast<float>(total) / count << endl;

    return 0;
}
