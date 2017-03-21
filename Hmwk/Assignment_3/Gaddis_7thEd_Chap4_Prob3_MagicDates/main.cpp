/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 8:07 PM
 * Purpose:  Determine whether a date is a magic date
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
    int month; //Month in numeric form
    int day;   //Day of the month
    int year;  //Two-digit year
    
    //Input data
    cout << "This program will determine whether a date is magic or not." << endl;
    cout << "Input a month (in numeric form)" << endl;
    cin >> month;
    cout << "Input a day of the month (in numeric form)" << endl;
    cin >> day;
    cout << "Input a year (only the last two digits)" << endl;
    cin >> year;
    
    //Map inputs to outputs or process the data
    if (year == month * day)  //Compare year to month times day
        cout << "The date is magic." << endl;
    else 
        cout << "The date is not magic." << endl;
    
    //Output the transformed data
    
    //Exit stage right! 
    return 0;
}
