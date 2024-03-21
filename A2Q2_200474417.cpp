
/**
Student Name: Oluwaseun Ayeni

Student Number: 200474417

Assignment Number: CS-110 A2Q2

Program Name: Interest calculator (A2Q2_200474417.cpp)

Last Modified: 15/02/2024

------ Problem Statement -----
This C++ program reads the  investment amount, annual interest rate, and number of years, and displays the future investment value
 
 ------ Input and Output ------
 Input: investmentAmount, annualInterestRate, numberOfYears
 Output: The accumulated value of the investment

 -------- Assumptions ---------
 a) Annual interest rate is 4.25%
 
 ------ Major Variables -------
 investmentAmount --> Amount been invested
 annualInterestRate--> Rate for the investing per year
 numberOfYears--> Years of investment

 ----- Program Limitation -----
 This program result depends on the annual rate the user input
 */

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables to store user input values
    double investmentAmount, annualInterestRate, numberOfYears;

    // Asks user to enter investment amount
    cout << "Enter investment amount: ";
    cin >> investmentAmount;

    // Ask user to enter annual interest rate
    cout << "Enter annual interest rate in percentage: ";
    cin >> annualInterestRate;

    // Ask user to enter number of years
    cout << "Enter number of years: ";
    cin >> numberOfYears;

    //----- Calculate future investment value -----//
    double monthlyInterestRate = annualInterestRate / 100 / 12; // Convert annual interest rate to monthly
    double futureInvestmentvalue = investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12);

    // Display the accumulated value with two decimal places
    cout << fixed << setprecision(2);
    cout << "Accumulated value is $" << futureInvestmentvalue << endl;

    return 0;
}


//End program.
