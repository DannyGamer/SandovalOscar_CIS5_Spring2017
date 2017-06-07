/*
* File:   main.cpp
* Author: Oscar Sandoval
* Created on February 28, 2017, 09:20 PM
* Purpose:  Calculate total sales tax on a purchase
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
        float cost=52.0f;          //Cost of purchase made
        float stateSalesTax=.04f;  //State sales tax
        float countySalesTax=.02f; //County sales tax
        float totalSalesTax;       //Total Sales Tax

	//Map inputs to outputs or process the data
        totalSalesTax = (stateSalesTax+countySalesTax)*cost;  //Add taxes

	//Output the transformed data
        cout<<"The total sales tax on a $52 purchase will be $" 
                <<totalSalesTax<<endl;

	//Exit stage right!
	return 0;
}
