//
//  Randmnum.cpp
//  uorcplus
//
//  Created by Oluwaseun Ayeni on 2024-01-26.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


int main (){
    
    // Declaring the array with the size of a array which we don't have to do because the complier is smart enough to determime the size of the array int size[] = {3,4,5,6,3,5} is the same as the declared array below.
    int size[6] = {3,4,5,6,3,5};
    // Looping through the array using the sizeof() function instead of adding the size of our array i.e i < 5 or whatever the size is but we have to divide the size of the array with the size of the type if we want to get the correct size of the array instead of getting the size in btye.
    for (int i = 0; i < sizeof(size)/sizeof(int); i++){
    // Finding if we have number 4 in the array
        if (size[i] == 4){
    // Print a message out as the replacement if we have 4 in the array
            cout << "I found a 4" << endl;
            
        }else{
    // Then print the all the value in the array with their index
            cout << i << "-> " << size[i] << "\n";
        }
        
    }
    return 0;
    
}

