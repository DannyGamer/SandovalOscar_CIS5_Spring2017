/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 9, 2017, 9:08 PM
 * Purpose: Calculate a car's gas mileage.
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
    //Declare variables and initialize variables
    int gallons, //Number of gallons of gas the car can hold on full tank
        mFull;   //Number of miles that can be driven on full tank
    float mpg;   //Miles that can be driven per gallon
    
    //Input data
    cout<<"This program will calculate a car's gas mileage."<<endl;
    cout<<"How many gallons of gas can the car hold?"<<endl;
    cin>>gallons;
    cout<<"How many miles can the car be driven on a full tank?"<<endl;
    cin>>mFull;
    
    //Map inputs to outputs or process the data
    mpg=mFull/gallons; //Calculation to get miles per gallon
    
    //Output the transformed data
    cout<<fixed<<setprecision(1);
    cout<<"The number of miles that may be driven per gallon of gas is "
            <<mpg<<endl;
   
    //Exit stage right!
    return 0;
}

