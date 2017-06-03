/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 15th, 2017, 8:20 PM
 * Purpose: Find highest and lowest values in an array
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
    const int SIZE = 10;
    float array[SIZE];
    
    //Input data
    cout << "This program will calculate the highest and lowest values from "
            "a set of values that you input." << endl;
    
    cout << "Input 10 values, each separated by a space: ";
    for(int i = 0; i < SIZE; i++)
        cin >> array[i];
    
    // Find the highest value in the array
    int highest = array[0];
    for(int count = 1; count < SIZE; count++)
    {
        if(array[count] > highest)
            highest = array[count];
    }
    
    // Find the lowest value in the array
    int lowest = array[0];
    for(int low = 1; low < SIZE; low++)
    {
        if(array[low] < lowest)
            lowest = array[low];
    }
    
    //Output the transformed data
    cout << "The highest value is " << highest << endl;
    cout << "The lowest value is " << lowest << endl;
    
    //Exit stage right!
    return 0;
}