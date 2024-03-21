
// /**
// Student Name: Oluwaseun Ayeni

// Student Number: 200474417

// Assignment Number: CS-110 A2Q4

// Program Name: library (A2Q4_200474417.cpp)

// Last Modified: 16/02/2024

// ------ Problem Statement -----
// This C++ program has an array that stores in three books from user, sort it and also filters it.
 
//  ------ Input and Output ------
//  Input: Books and options
//  Output: Result
 
//  ------ Major Variables -------
//  catalog -> Store the array of books
//  *sortedCatalog -> Memory address of array sortedCatalog

//  ----- Program Limitation -----
//  This array is only limited to three elemets
 
// */


// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     // Declare an array to store the catalog of books
//     string catalog[3];

//     // Prompt the user to enter three book titles and store them in the catalog array
//     cout << "Enter the first book: ";
//     getline(cin >> ws, catalog[0]);

//     cout << "Enter the second book: ";
//     getline(cin >> ws, catalog[1]);

//     cout << "Enter the third book: ";
//     getline(cin >> ws, catalog[2]);

//     // Askthe user to choose an operation (Search by first letter, Ascending Order, or Descending Order)
//     cout << "Choose (S) for Search by first letter, (A) for Ascending Order, (D) for Descending Order: ";
//     char choice;
//     cin >> choice;
    
//     // Convert the choice to uppercase for simplicity
//     choice = toupper(choice);

//     // Perform the selected operation based on the user's choice
//     switch (choice) {
//         case 'S': {
//             // Search by first letter
//             cout << "Enter the first letter of the book you are looking for: ";
//             char letter;
//             cin >> letter;

//             // Loop through the catalog to find books with the specified first letter
//             bool found = false;
//             for (const string &book : catalog) {
//                 // The toupper(book[0]) converts the first letter of each books to uppercase then compare it to user input, then check if it exists.
//                 if (toupper(book[0]) == toupper(letter)) {
//                     cout << "Your search result is: " << book << endl;
//                     found = true;
//                     break;
//                 }
//             } //Execute, If book is not found.
//             if (!found) {
//                 cout << "No book found with that first letter." << endl;
//             }
//             break;
//         }
//         case 'A': {
//             // Sort the catalog in ascending alphabetical order
//             string sortedCatalog[3] = {catalog[0], catalog[1], catalog[2]};
//             size_t arraySize = sizeof(sortedCatalog)/sizeof(*sortedCatalog);
//             sort(sortedCatalog, sortedCatalog + arraySize);
//             cout << "The three books in ascending alphabetical order are: ";
//             for (const string &book : sortedCatalog) {
//                 cout << book << ", ";
//             }
//             cout << endl;
//             break;
//         }
//         case 'D': {
//             // Sort the catalog in descending alphabetical order
//             string sortedCatalog[3] = {catalog[0], catalog[1], catalog[2]};
//             size_t arraySize = sizeof(sortedCatalog)/sizeof(*sortedCatalog);
//             sort(sortedCatalog, sortedCatalog + arraySize, greater<string>());
//             cout << "The three books in descending alphabetical order are: ";
//             for (const string &book : sortedCatalog) {
//                 cout << book << ", ";
//             }
//             cout << endl;
//             break;
//         }
//         default:
//             // Execute if the choice is invalid
//             cout << "Invalid choice. Please choose (S), (A), or (D)." << endl;
//     }

//     return 0;
// }

// // end program
