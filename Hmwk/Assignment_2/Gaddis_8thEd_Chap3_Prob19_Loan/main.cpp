/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 02, 2017, 12:12 PM
 * Purpose:  Calculate Loan
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;//Percent conversion
const float CNVYRMN=12.0f; //Conversion from years to months

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float consRec,//What the consumer receives $'s
          mthPay; //Monthly Payment $'s
    int   intRate,//Yearly Percentage Interest Rate
          nMonths;//Number of months in the loan
    
    //Input data
    cout<<"This program calculates Loan Parameters"<<endl;
    cout<<"Input the Loan amount to be received $";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest rate % = ";
    cin>>intRate;
    
    //Map inputs to outputs or process the data
    float i=intRate/CNVYRMN/PERCENT;//Intermediate Calculation of interest
    float temp=pow((1+i), nMonths);//Intermediate Calculation of (1+i)^n
    mthPay=i*temp*consRec/(temp-1);
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest Rate = "<<intRate<<"%"<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;
    
    
    //Exit stage right!
    return 0;
}

