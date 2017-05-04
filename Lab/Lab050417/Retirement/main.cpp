/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 4th, 2017, 11:29 AM
 * Purpose: Create program for Retirement
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int intBal = 0;
    float intRate = 5;
    int salary = 100000;
    float perCent = 20;
    float retire;
    int yrsWrkd;
    int year = 2022;
    float saveBal;
    float intPaid;
    
    //Initialize variables
    
    //Input data
//    cout << "This program will calculate the amount of money you need to retire." << endl;
    cout << "Input the amount of years you have worked: ";
    cin >> yrsWrkd;
//    cout << "Input your initial balance in your savings account: ";
//    cin >> intBal;
//    cout << "Input the Interest Rate: ";
//    cin >> intRate;
//    cout << "Input your Salary: ";
//    cin >> salary;
//    cout << "Input the Per Cent Salary to save for Retirement/year: ";
//    cin >> perCent;
    
    //Map inputs to outputs or process the data
    intRate = intRate / 100.0f;
    perCent = perCent / 100.0f;
    saveBal = intBal;
    intPaid = saveBal * intRate;
    retire = salary * perCent;
    
    //Output the transformed data
    cout << endl << "Years Working | Year | Savings Balance | Interest Paid per Year"
            " | Yearly Deposit" << endl;
    
    int i = 0;
    cout << fixed << setprecision(2);
    cout << setw(7) << i << setw(13) << year++ << setw(16) << saveBal 
         << setw(19) << intPaid << setw(22) << retire << endl;
    
    for (i = 1; i <= yrsWrkd; i++)
    {
        saveBal = saveBal + intPaid + retire;
        intPaid = saveBal * intRate;
        cout << setw(7) << i << setw(13) << year++ << setw(16) << saveBal 
             << setw(19) << intPaid << setw(22) << retire << endl;
    }
    
    //Exit stage right!
    return 0;
}