/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 15th, 2017, 9:40 PM
 * Purpose: Calculate salsa sales
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Formatting output
#include <string>   //For strings

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 5;
    int sold[SIZE];
    string name[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    float total = 0;
    int number;
    int number2;
    
    //Input data
    cout << "This program will calculate sales for different salsa types during "
            "a month based on information that you input." << endl;
    
    for(int i = 0; i < SIZE; i++)
    {
        do
        {
            cout << "Input the number of jars of " << name[i] << " salsa sold "
                    "in the past month: ";
            cin >> sold[i];
            if (sold[i] < 0)
                cout << "Invalid input. Enter a positive number." << endl;
        } while(sold[i] < 0) ;
    }
    
    // Calculate total sales of all salsa types in the past month
    for(int i = 0; i < SIZE; i++)
        total += sold[i];
    
    //Find months with the highest and lowest amounts
    int highest = sold[0];
    for(int count = 1; count < SIZE; count++)
    {
        if(sold[count] > highest)
        {
            highest = sold[count];
            number = count;
        }
    }
    
    // Find the lowest value in the array
    int lowest = sold[0];
    for(int low = 1; low < SIZE; low++)
    {
        if(sold[low] < lowest)
        {
            lowest = sold[low];
            number2 = low;
        }
    }
    
    //Output the transformed data
    cout << "\nThe number of jars sold of each salsa type are:" << endl;
    for(int i = 0; i < SIZE; i++)
        cout << name[i] << ": " << sold[i] << endl;
    
    cout << "\nThe total number of jars sold is " << total << endl;
    cout << "The " << name[number] << " salsa sold the highest amount of "
            "jars with an amount of " << highest << endl;
    cout << "The " << name[number2] << " salsa the lowest amount of "
            "jars with an amount of " << lowest << endl;
    
    //Exit stage right!
    return 0;
}