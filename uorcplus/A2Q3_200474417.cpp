
/**
Student Name: Oluwaseun Ayeni

Student Number: 200474417

Assignment Number: CS-110 A2Q2

Program Name: Linear equation(A2Q3_200474417.cpp)

Last Modified: 15/02/2024

------ Problem Statement -----
This C++ program solves two linear equations using the Cramer’s rule 
 
 ------ Input and Output ------
 Input: coeffiecnts(a, b, c, d, e, f)
 Output: Value of x and y
 
 ------ Major Variables -------
 determinant --> Store result of the determinant

 ----- Program Limitation -----
 This program exit if the determinant is equal to zero
 */


#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    // Declare float variables to store user input
    float a, b, c, d, e, f;

    // Ask the user to enter the coefficients
    cout << "Enter coefficients (a, b, c, d, e, f): ";
    cin >> a >> b >> c >> d >> e >> f;

    // Calculate the determinant
    float determinant = a * d - b * c;

    // Check if the determinant is zero
    if (determinant == 0) {
        cout << "The equation has no solution" << endl;
    }
    
    else{
        
        // Calculate the values of x and y using Cramer's rule
        float x = (e * d - b * f) / determinant;
        float y = (a * f - e * c) / determinant;

        // Display the values of x and y
        cout << "x is " << x << " and y is " << y << endl;
    }

    return 0;
}

//End program
 
