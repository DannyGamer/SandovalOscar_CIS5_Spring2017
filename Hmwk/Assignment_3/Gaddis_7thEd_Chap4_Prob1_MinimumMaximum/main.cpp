/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 5:28 PM
 * Purpose:  Determine the larger and smaller numbers.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int number1; //Value for the first number
    int number2; //Value for the second number
    int larger;
    int smaller;
    
    //Input data
    cout << "This program will determine the minimum and "
            "maximum value between two given numbers" << endl;
    cout << "Input the first number: ";
    cin >> number1;
    cout << "Input the second number: ";
    cin >> number2;
    
    //Map inputs to outputs or process the data
    number1 > number2 ? (larger = number1, smaller = number2) 
                : (larger = number2, smaller = number1);
    
    cout << larger << " is larger." << endl;
    cout << smaller << " is smaller." << endl;
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

