/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 3, 2017, 9:43 PM
 * Purpose: Calculate pay for a period of time
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
    int days;     //Number of days worked
    float salary = 1;    //Salary per day
    float edPriod = 0;  //Total salary at the end of the period
    int rate = 2;
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate the salary for a person during a time period as the salary doubles each day." << endl;
    cout << "Please input the number of days the person worked:" << endl;
    cin >> days;
    
    if (days < 1)
    {
     cout << "Invalid number of days. Please input an integer greater than 1." << endl;
     //return 1;
    }
    
    cout << "\nDay     Salary" << endl;
    cout << "-----------------" << endl;
    
    //Map inputs to outputs or process the data
    for (int i = 1; i <= days; i++)
    {
     salary = salary * rate;
     edPriod += salary;
     cout << " " << i << "      $" << salary/100 << endl;
    }
    cout << "\nThe total salary for this period is $" << edPriod/100 << endl;
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}