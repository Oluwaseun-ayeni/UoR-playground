
/**
 * Student Name: Oluwaseun Ayeni
 *
 * Student Number: 200474417
 *
 * Assignment Number: CS-110 A3Q4
 *
 * Program Name: A3Q4_200474417.cpp
 *
 * Last Modified: 12/03/2024
 *
 * ------ Problem Statement -----
 * This C++ program reads a file containing multiple lines of text and calculates total
number of alphabetical characters (ignore numerical characters, whitespaces, and signs), number of
vowels and consonants for each line.
 *
 * ------ Input and Output ------
 * Input: file containing multiple lines of text(input.txt)
 * Output: total characters, vowels and consonants for each line
 *
 * ------ Major Variables -------
 * line -> Store the current line being read
 * totalCharacters -> Store the total number of alphabetical characters
 * vowels -> Store the number of vowels
 * consonants -> Store the number of consonants
 * inputFile -> Store the file being read
 * 
 *
 *
 * ----- Program Limitation -----
 * This program only reads from a file called input.txt
 */
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& line) {
    int count = 0;
    for (char c : line) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
            tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count consonants in a string
int countConsonants(const string& line) {
    int count = 0;
    for (char c : line) {
        if (isalpha(c) && !countVowels(string(1, c))) {
            count++;
        }
    }
    return count;
}

int main() {
  //Open file input.txt
    ifstream inputFile("input.txt");
  //Executr if file was not found
    if (!inputFile) {
        cout << "Failed to open input file." << endl;
        return 1;
    }

   //Using while loop to read each line in the file
    string line;
    while (getline(inputFile, line)) {
        int totalCharacters = 0;
        int vowels = 0;
        int consonants = 0;

        // Using for loop,count total characters
        for (char letter : line) {
            if (isalpha(letter)) {
                totalCharacters++;
            }
        }

        // Count vowels and consonants
        vowels = countVowels(line);
        consonants = countConsonants(line);

        // Output results
        cout << "String: " << line << endl;
        cout << "+----------------------+--------------+" << endl;
        cout << "| Total characters:   | " << totalCharacters << " |" << endl;
        cout << "+----------------------+--------------+" << endl;
        cout << "| Vowels:             | " << vowels << " |" << endl;
        cout << "| Consonants:         | " << consonants << " |" << endl;
        cout << "+----------------------+--------------+" << endl;
    }
//Close file
    inputFile.close();

    return 0;
}
//End of program