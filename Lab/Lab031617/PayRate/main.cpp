/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 16, 2017, 11:24 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    unsigned short payRate; //Pay rate given per hour worked
    unsigned short hrsWrkd; //Amount of hours worked
    unsigned short payChck; //Resulting pay check for values given
    
    //Input data
    cout<<"This program produces a paycheck based on pay rate "<<endl;
    cout<<"Type in the pay rate"<<endl;
    cin>>payRate;
    cout<<"Type in the amount of hours worked"<<endl;
    cin>>hrsWrkd;
//    if(!(){
//        cout<<"You failed to type an integer between 0 and 100"<<endl;
//        return 1;//Use DeMorgans Law to make clear
//    }
    
    //Map inputs to outputs or process the data
    if  (hrsWrkd<=40)    payChck=payRate*hrsWrkd;
    else if(hrsWrkd>40)   payChck=(payRate*hrsWrkd)+payChck*(hrsWrkd-40);
    
    //Output the transformed data
    cout<<"Your pay check is "<<payChck<<endl;
    
    //Exit stage right!
    return 0;
}

