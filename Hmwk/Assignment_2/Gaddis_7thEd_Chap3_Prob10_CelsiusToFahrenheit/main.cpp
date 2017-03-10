/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 09, 2017, 12:11 PM
 * Purpose:  Calculate Test Average
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float celsius, //Temperature in Celsius degrees
          fH;      //Temperature in Fahrenheit degrees
    
    //Input data
    cout<<"This program will convert any given Celsius temperature to ";
    cout<<"Fahrenheit temperature."<<endl;
    cout<<"Type in the Celsius temperature that you want to convert:"<<endl;
    cin>>celsius;
    
    //Map inputs to outputs or process the data
    fH=(9.0f/5.0f)*celsius+32;  //Calculation to convert Celsius to Fahrenheit
    
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"The Fahrenheit temperature is "<<fH<<"°F"<<endl;
    
    //Exit stage right!
    return 0;
}

