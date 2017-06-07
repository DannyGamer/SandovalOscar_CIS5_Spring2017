/*
* File:   main.cpp
* Author: Oscar Sandoval
* Created on February 28, 2017, 08:49 PM
* Purpose:  Create program that predicts sales
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
        float salesPercentage = .62f;  //62% Profit of total sales in year
        float sales = 4.6f;            //$4.6 million sales in that year
        float totalProfit;             //Profit made in year
        
	//Initialize variables

	//Input data

	//Map inputs to outputs or process the data
	totalProfit = sales*salesPercentage;  //Calculate total profit

	//Output the transformed data
	cout<<"The East Coast Division will generate $"<<totalProfit<<
                " million this year"<<endl;

	//Exit stage right!
	return 0;
}
