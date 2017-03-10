/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 09, 2017, 12:28 PM
 * Purpose:  Calculate monthly and annual automobile costs
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
    int loan,     //Amount of monthly loan payment in $
        insrnce,  //Amount of monthly insurance payment in $
        gas,      //Amount of monthly gas expenses in $
        oil,      //Amount of monthly oil expenses in $
        tires,    //Amount of monthly tire expenses in $
        maintce,  //Amount of monthly maintenance expenses in $
        mthly,    //Amount of total monthly expenses in $
        annual;   //Amount of annual expenses in $
    
    //Input data
    cout<<"This program will calculate your monthly and annual automobile ";
    cout<<"costs."<<endl;
    cout<<"Type in the monthly loan cost for your automobile"<<endl;
    cin>>loan;
    cout<<"Type in the monthly insurance cost for your automobile"<<endl;
    cin>>insrnce;
    cout<<"Type in the monthly gas cost for your automobile"<<endl;
    cin>>gas;
    cout<<"Type in the monthly tires cost for your automobile"<<endl;
    cin>>tires;
    cout<<"Type in the monthly maintenance cost for your automobile"<<endl;
    cin>>maintce;
    
    //Map inputs to outputs or process the data
    mthly=loan+insrnce+gas+oil+tires+maintce; //Calculate total monthly costs
    annual=mthly*12;     //Calculate total annual costs
    
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly automobile costs will be $ "<<mthly<<endl;
    cout<<"Your annual automobile costs will be $ "<<annual<<endl;
    
    //Exit stage right!
    return 0;
}

