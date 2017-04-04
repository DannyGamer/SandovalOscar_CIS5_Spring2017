/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 4, 2017, 9:57 AM
 * Purpose:  Calculate salary
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants
const float CNVPTOD = 100.0f; //Pennies to Dollars

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int salary;     //Pennies are the units
    int sumSlry = 0;
    unsigned short dyLimit; //Limit the number of days
    
    //Initialize variables
    sumSlry = salary = 1; //1 penny
    
    
    //Input the number of days
    cout << "This program calculates your double salary and pay daily" << endl;
    cout << "Input the number of days which are equal to 1 but limited "
            "to 31" << endl;
    do
    {
        cin >> dyLimit;
    }while(dyLimit < 1 || dyLimit > 31);
    
    //Output the heading
    cout << fixed << setprecision(2) << showpoint;
    cout << "Day      $Salary       $Sum" << endl;
    cout << "-----------------------------------" << endl;
    cout << setw(3) << 1 << setw(12) << salary/CNVPTOD << setw(12)
         << sumSlry/CNVPTOD << endl;
    
    //Map inputs to outputs or process the data
    for(int day = 2; day <= dyLimit; day++)
    { 
        salary *= 2;
        sumSlry += salary;
        cout << setw(3) << day << setw(12) << salary/CNVPTOD << setw(12) 
             << sumSlry/CNVPTOD << endl;
    }

    //Exit stage right!
    return 0;
}

