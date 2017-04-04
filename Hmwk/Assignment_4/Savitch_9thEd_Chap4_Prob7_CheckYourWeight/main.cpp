/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 30, 2017, 12:21 PM
 * Purpose: Calculate your weight
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float MSSEARTH = 5.972e27f; //Mass of earth in grams
const float GCONST = 6.673e-8f;   //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM = 1.0f / 30.48f; //Conversion from ft to cm
const float CNVMFT = 5280.0f;        //Conversion from miles to feet
const float RADERTH = 3959;          //Radius of the Earth in miles

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float myWeight;   //Result in lbs
    float myMass; //Units of slugs
                
    //Input Data
    cout << "This program will calculate your weight in lbs." << endl;
    cout << "Please input your mass in slugs:";
    cin >> myMass;
   
    //Map inputs to outputs or process the data
    myWeight = GCONST * CNVFTCM * CNVFTCM * CNVFTCM * MSSEARTH * myMass 
             /(RADERTH * RADERTH * CNVMFT * CNVMFT);
    
    //Output the transformed data
    cout << "You weigh " << myWeight << " lbs" << endl;
    
    //Exit stage right!
    return 0;
}

