
/**
Student Name: Oluwaseun Ayeni

Student Number: 200474417

Assignment Number: CS-110 A3Q2

Program Name: A3Q2_200474417.cpp

Last Modified: 12/03/2024

------ Problem Statement -----
This C++ program prompts the user to enter the number of students and
each student’s name and score and displays the name and score of the student with the highest score
and the student with the second-highest score.
 
 ------ Input and Output ------
 Input: number of students, student names and scores
 Output: top two students and their scores
 
 ------ Major Variables -------
 noOfStudents -> Store the number of students
 names -> Store the names of the students
 scores -> Store the scores of the students



 ----- Program Limitation -----
This program only takes in the number of students and their names and scores
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
  
    //Declare variables that stores the number of students
    int noOfStudents;
  
    // Prompt user to enter the number of students
    cout << "Enter the number of students: ";
    cin >> noOfStudents;
  
   // Create arrays to store student names and scores
    string names[noOfStudents];
    double scores[noOfStudents];

    // Input student names and scores
    for (int i = 0; i < noOfStudents; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> names[i];
        cout << "Enter student " << i + 1 << " score: ";
        cin >> scores[i];
    }

   // Sort scores based on scores in descending order
   sort(scores, scores + noOfStudents, greater<double>());
   sort(names, names + noOfStudents);



    cout << "Top two students:" << endl;
    cout << fixed << setprecision(2);
    cout << names[0] << "'s score is " << scores[0] << endl;
    cout << names[1] << "'s score is " << scores[1] << endl;

    return 0;
}