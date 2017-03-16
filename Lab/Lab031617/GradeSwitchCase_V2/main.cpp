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
    switch(score){
        case 100:case 99:case 98: case 97:case 96:
        case   95:case 94:case 93:case 92:case 91:
        case 90: grade='A';break;
        case 89:case 88: case 87:case 86:
        case 85:case 84:case 83:case 82:case 81:
        case 80: grade='B';break;
        case 79:case 78: case 77:case 76:
        case 75:case 74:case 73:case 72:case 71:
        case 70: grade='C';break;
        case 69:case 68: case 67:case 66:
        case 65:case 64:case 63:case 62:case 61:
        case 60: grade='D';break;
        default: grade='F';
    }
    
    //Output the transformed data
    cout<<"For a score = "<<score<<" your grade is an "<<grade<<endl;
    
    //Exit stage right!
    return 0;
}

