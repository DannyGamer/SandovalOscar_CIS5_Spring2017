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
    unsigned short score; //Integer scores valid from 0 to 100
    char grade; 
    
    //Input data
    cout<<"This program produces a grade from a score input"<<endl;
    cout<<"The data type used is an integer [0-100]"<<endl;
    cout<<"Type in the score"<<endl;
    cin>>score;
    if(!(score>=0&&score<=100)){
        cout<<"You failed to type an integer between 0 and 100"<<endl;
        return 1;//Use DeMorgans Law to make clear
    }
    
    //Map inputs to outputs or process the data
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    
    //Output the transformed data
    cout<<"For a score = "<<score<<" your grade is an "<<grade<<endl;
    
    //Exit stage right!
    return 0;
}

