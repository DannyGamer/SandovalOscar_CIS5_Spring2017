/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 7:50 PM
 * Purpose:  Convert mass to weight
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
    float mass;
    float weight;
    
    //Input data
    cout << "This program will convert an object's mass in kilograms"
            " to its weight in newtons." << endl;
    cout << "Input the object's mass (in kilograms):" << endl;
    cin >> mass;
    
    //Map inputs to outputs or process the data
    weight = mass * 9.8; //Calculate area of rectangle 1
    if (weight > 1000)
        cout << "The object's weight is " << weight << " newtons. "
                "It is too heavy." << endl;
    else if (weight < 10)
        cout << "The object's weight is " << weight << " newtons. "
                "It is too light." << endl;
    else 
        cout << "The object's weight is " << weight << " newtons." << endl;
    
    //Output the transformed data
    
    //Exit stage right! 
    return 0;
}
