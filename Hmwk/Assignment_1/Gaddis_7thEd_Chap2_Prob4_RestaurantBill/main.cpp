/*
* File:   main.cpp
* Author: Oscar Sandoval
* Created on February 28, 2017, 09:40 PM
* Purpose:  Compute tax and tip on restaurant bill
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
        float mealCharge=44.50;     //Meal charge (without tax)
        float tax=.0675;     //Tax of meal
        float tip=.15;       //Tip percentage to be given
        float mealCost,tipAmount,totalBill;

	//Map inputs to outputs or process the data
        mealCost = (mealCharge*tax)+mealCharge;  //Calculate total bill for meal
        tipAmount = mealCost*tip;    //Calculate tip to be given
        totalBill = mealCost+tipAmount;

	//Output the transformed data
        cout<<"Meal charge          = $"<<mealCharge<<endl;
        cout<<"Tax amount           = "<<tax*100<<"%"<<endl;
        cout<<"Meal Cost (Plus tax) = $"<<mealCost<<endl;
        cout<<"Tip amount           = $"<<tipAmount<<endl;
        cout<<"Total Bill           = $"<<totalBill<<endl;

	//Exit stage right!
	return 0;
}
