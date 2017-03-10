/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 09, 2017, 11:54 AM
 * Purpose:  Calculate Test Average for 5 different tests.
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
    float test1,test2,test3,test4,test5; //Scores for each test
    float testavg;                       //The average test score
    
    //Input data
    cout<<"This program will calculate the average test score for ";
    cout<<"five test scores."<<endl;
    cout<<"Type in the five test scores (each one followed by a space):"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Map inputs to outputs or process the data
    testavg=(test1+test2+test3+test4+test5)/5.0f; //Calculate average test score
    
    //Output the transformed data
    cout<<fixed<<setprecision(1);
    cout<<"The average test score is "<<testavg<<endl;
    
    //Exit stage right!
    return 0;
}

