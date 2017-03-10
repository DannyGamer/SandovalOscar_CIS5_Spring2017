/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 9, 2017, 8:50 PM
 * Purpose: Calculate the average rainfall for three months
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
    string month1, month2, month3;      //Name of each month
    float rain1, rain2, rain3, avgRain; //Rainfall per month in inches
    
    //Input data
    cout<<"This program will calculate the average rainfall for"
            " three months"<<endl;
    cout<<"Enter month 1:";
    cin>>month1;
    cout<<"Enter the amount of rain (in inches) that fell this month."<<endl;
    cin>>rain1;
    cout<<"Enter month 2:";
    cin>>month2;
    cout<<"Enter the amount of rain (in inches) that fell this month."<<endl;
    cin>>rain2;
    cout<<"Enter month 3:";
    cin>>month3;
    cout<<"Enter the amount of rain (in inches) that fell this month."<<endl;
    cin>>rain3;
    
    //Map inputs to outputs or process the data
    avgRain=(rain1 + rain2 + rain3)/3; //Calculation to get average rainfall
    
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "
            <<month3<<" is "<<avgRain<<" inches."<<endl;
   
    //Exit stage right!
    return 0;
}

