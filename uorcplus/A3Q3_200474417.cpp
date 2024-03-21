
/**
Student Name: Oluwaseun Ayeni

Student Number: 200474417

Assignment Number: CS-110 A3Q3

Program Name: A3Q3_200474417.cpp

Last Modified: 12/03/2024

------ Problem Statement -----
This C++ program lets the user enter the loan amount and loan period in number of years and displays the
monthly and total payments for each interest rate starting from 5% to 8%, with an increment of 1/8.

------ Input and Output ------
Input: loan amount and number of years
Output: monthly and total payments for each interest rate

------ Major Variables -------
loanAmount -> Store the loan amount
numberOfYears -> Store the number of years
interestRate -> Store the interest rate

----- Program Limitation -----
This program only outputs the monthly and total payments for each interest rate starting from 5% to 8%, 
with an increment of 1/8.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Declare variables for loan amount and number of years
    double loanAmount;
    int numberOfYears;

    // Prompt the user to input the loan amount
    cout << "Loan Amount: ";
    cin >> loanAmount;

    // Prompt the user to input the number of years
    cout << "Number of Years: ";
    cin >> numberOfYears;

    // Display the header for the table
    cout << "Interest Rate\tMonthly Payment\tTotal Payment" << endl;

    // Initialize interest rate and increment
    double interestRate = 5.0;
    double increment = 0.125;

    // Loop through different interest rates betwee 5% and 8%.
    while (interestRate <= 8.0) {
        // Calculate monthly rate and number of months
        double monthlyRate = interestRate / 1200;
        int numberOfMonths = numberOfYears * 12;

        // Calculate monthly payment and total payment
        double monthlyPayment = (loanAmount * monthlyRate) / (1 - 1 / pow(1 + monthlyRate, numberOfMonths));
        double totalPayment = monthlyPayment * numberOfMonths;

        // Display the results
        cout << fixed << setprecision(2);
        cout << interestRate << "%\t\t" << monthlyPayment << "\t\t" << totalPayment << endl;

        // Increment the interest rate
        interestRate += increment;
    }

    return 0;
}
//end program