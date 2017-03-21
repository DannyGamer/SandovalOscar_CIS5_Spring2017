/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 8:07 PM
 * Purpose:  Calculate a person's Body Mass Index (BMI)
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
    //Declare variables
    float weight; //Given weight in pounds
    int height;   //Given height in inches
    float BMI;    //Person's Body Mass Index dependent on the weight and height
    
    //Input data
    cout << "This program will calculate a person's Body Mass Index"
            " (BMI)" << endl;
    cout << "Input the weight (in pounds):" << endl;
    cin >> weight;
    cout << "Input the height (in inches):" << endl;
    cin >> height;
    
    //Map inputs to outputs or process the data
    BMI = weight * (703.0f / (height * height)); //Calculate the BMI
    
    //Output the transformed data
    cout<<fixed<<setprecision(1)<<showpoint;
    if (BMI < 18.5)
        cout << "The BMI is " << BMI << ". The person is underweight." << endl;
    else if (BMI >= 18.5 && BMI <= 25)
        cout << "The BMI is " << BMI << ". The person is optimal weight." << endl;
    else 
        cout << "The BMI is " << BMI << ". The person is overweight." << endl;
    
    //Exit stage right! 
    return 0;
}
