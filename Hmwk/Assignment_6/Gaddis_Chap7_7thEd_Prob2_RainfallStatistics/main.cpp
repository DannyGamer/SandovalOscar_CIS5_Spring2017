/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 15th, 2017, 9:11 PM
 * Purpose: Calculate Rainfall Statistics
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Formatting output

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 12;
    float month[SIZE];
    float total = 0;
    float average;
    int number;
    int number2;
    
    //Input data
    cout << "This program will calculate different rainfall statistics "
            "based on information that you input." << endl;
    
    for(int i = 0; i < SIZE; i++)
    {
        do
        {
            cout << "Input the total rainfall for month " << i + 1 << ": ";
            cin >> month[i];
            if (month[i] < 0)
                cout << "Invalid input. Enter a positive number." << endl;
        } while(month[i] < 0) ;
    }
    
    // Calculate total rainfall in the year
    for(int i = 0; i < SIZE; i++)
        total += month[i];
    
    // Calculate average monthly rainfall
    average = total / SIZE;
    
    //Find months with the highest and lowest amounts
    int highest = month[0];
    for(int count = 1; count < SIZE; count++)
    {
        if(month[count] > highest)
        {
            highest = month[count];
            number = count;
        }
    }
    
    // Find the lowest value in the array
    int lowest = month[0];
    for(int low = 1; low < SIZE; low++)
    {
        if(month[low] < lowest)
        {
            lowest = month[low];
            number2 = low;
        }
    }
    
    //Output the transformed data
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The total rainfall in the year is " << total << endl;
    cout << "The average monthly rainfall is " << average << endl;
    cout << "Month " << number + 1 << " is the the month with the highest amount of "
            "rainfall with an amount of " << highest << endl;
    cout << "Month " << number2 + 1 << " is the the month with the lowest amount of "
            "rainfall with an amount of " << lowest << endl;
    
    //Exit stage right!
    return 0;
}