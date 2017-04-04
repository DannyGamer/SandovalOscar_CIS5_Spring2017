/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 3, 2017, 9:08 PM
 * Purpose: Calculate membership price for country club in next 6 years
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
    float price = 2500; //Money charged per year four country club in $
    float percent = 0.04f; //4% increase per year i membership price
    int endyear = 6; //6 years - Ending value for calculation
    float rate;      //Rate at which the price will increase - (Price * 4%)
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate and display a table for the price "
            "for a membership to a country club" << endl;
    cout << "in the next 6 years, given that the price will "
            "increase by 4% each year." << endl << endl;
    cout << "Year              Membership Price" << endl;
    cout << "----------------------------------------" << endl;
    
    //Map inputs to outputs or process the data
    for (int i = 1; i <= endyear; i++)
    {
     rate = (price * percent);
     price += rate;
     cout << " " << i << "                     $" << price << endl;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}