/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 03, 2017, 7:30 PM
 * Purpose: Calculate sum of numbers
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
    int number;  //Number up to which the numbers will sum
    int sum = 0;  //Sum of the numbers
    int i = 1;   //Starting with value of 1
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate the sum of the numbers up "
            "to a given number." << endl;
    cout << "Please input a positive integer value for the number to which "
            "you want to sum: " << endl;
    cin >> number;
    
    if (number < 0)
    {
        cout << "The number is invalid. Please input a positive integer "
                "value." << endl;
        return 1;
    }
    
    //Map inputs to outputs or process the data
    for (i; i <= number; i++)  //Loop that will sum all the numbers up to the given number
    {
        sum += i;
    }
    
    //Output the transformed data
    cout << "The computed sum of 1 to " << number << " is " << sum << endl;
    
    //Exit stage right!
    return 0;
}

