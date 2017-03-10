/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 9, 2017, 8:15 PM
 * Purpose: Calculate the total amount of income generated from ticket sales.
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
    float classA=15.0f,  //Cost of Class A seat tickets in $
          classB=12.0f,  //Cost of Class B seat tickets in $
          classC=9.0f;  //Cost of Class C seat tickets in $
    float ticketA,ticketB,ticketC,total; //Number of tickets of each class sold
    
    //Input data
    cout<<"This program will calculate the total income generated from"
            " ticket sales."<<endl;
    cout<<"How many Class A seat tickets were sold?"<<endl;
    cin>>ticketA;
    cout<<"How many Class B seat tickets were sold?"<<endl;
    cin>>ticketB;
    cout<<"How many Class C seat tickets were sold?"<<endl;
    cin>>ticketC;
    
    //Map inputs to outputs or process the data
    total=classA*ticketA + classB*ticketB + classC*ticketC; //Calculate income
    
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"The total income generated from ticket sales is $"<<total<<endl;    
    
    //Exit stage right!
    return 0;
}

