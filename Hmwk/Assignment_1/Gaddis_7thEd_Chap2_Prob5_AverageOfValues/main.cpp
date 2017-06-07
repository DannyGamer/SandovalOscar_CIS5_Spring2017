/*
* File:   main.cpp
* Author: Oscar Sandoval
* Created on February 28, 2017, 09:53 PM
* Purpose:  Compute average of 5 values
*/

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
	//Declare and initialize variables
        short no1=28;
        short no2=32;
        short no3=37;
        short no4=24;
        short no5=33;
        float sum,average;

	//Map inputs to outputs or process the data
        sum=no1+no2+no3+no4+no5;   //Calculate sum of values
        average=sum/5;             //Calculate average of values
                
	//Output the transformed data
        cout<<"The average of the numbers: 28, 32, 37, 24, 33 = "
                <<average<<endl;

	//Exit stage right!
	return 0;
}
