/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose: Print string "Hello, WOrld!"
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
    int no1;
    long no2;
    long long no3;
    char letter;
    float no4;
    double no5;
    
    //Initialize variables
    
    //Input data
    cin >> no1 >> no2 >> no3 >> letter >> no4 >> no5;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << no1 << endl;
    cout << no2 << endl;
    cout << no3 << endl;
    cout << letter << endl;
    cout << fixed << setprecision(3) << showpoint << no4 << endl;
    cout << fixed << setprecision(9) << showpoint << no5 << endl;
    
    //Exit stage right!
    return 0;
}