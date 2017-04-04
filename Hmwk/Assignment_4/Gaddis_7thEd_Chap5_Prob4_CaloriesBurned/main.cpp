/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 3, 2017, 8:44 PM
 * Purpose: Calculate calories burned per 5 minute interval for 30 minutes
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
    float cal = 3.9f; //Calories burned per minute
    float sum = 0;    //Sum of calories burned per minute
    int endtime = 30; //30 minutes - Ending value for calculation
    int minutes = 5;
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate the calories burned in a treadmill per 5 minute interval for 30 minutes." << endl;
    
    //Map inputs to outputs or process the data
    for (int i = 5; i <= endtime; i += minutes)
    {
     sum += (cal * minutes);
     cout << "The calories burned after " << i << " minutes are " << sum << endl;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}