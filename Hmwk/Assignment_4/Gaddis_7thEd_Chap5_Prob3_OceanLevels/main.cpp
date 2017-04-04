/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 3, 2017, 8:20 PM
 * Purpose: Calculate the ocean levels for the next 25 years
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float rise = 1.5f;  //Ocean's level rises at 1.5 mm per year
    float sum = 0.0f;
    int end = 25;  //will give the 
    int i = 1;   //Starting with value of 1
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate the level the ocean rises "
            "per year for 25 years."
         << endl;
    cout << "The ocean's level rises 1.5 mm per year." << endl << endl;
    cout << "Year         Level " << endl;
    
    //Map inputs to outputs or process the data
    for (i; i <= end; i++)  //Loop that will sum all the numbers up to the given number
    {
        sum = sum + rise;
        cout << " " << i << "           " << sum << " mm" << endl;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

