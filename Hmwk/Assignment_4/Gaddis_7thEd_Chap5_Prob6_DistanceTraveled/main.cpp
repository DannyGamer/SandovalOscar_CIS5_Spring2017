/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 3, 2017, 9:22 PM
 * Purpose: Calculate the distance traveled by vehicle
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int mph;       //Speed of vehicle in miles per hour
    int hrsTvld;  //Hours traveled in vehicle
    float distance;
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate the distance traveled by a vehicle." << endl;
    cout << "Please input the speed of the vehicle in mph:" << endl;
    cin >> mph;
    
    if (mph < 0)
    {
     cout << "Invalid speed. Please input a positive number." << endl;
     return 1;
    }
    
    cout << "Please input the number of hours traveled:" << endl;
    cin >> hrsTvld;
    
    if (hrsTvld < 1)
    {
     cout << "Invalid time. Please input a number greater than 1." << endl;
     return 1;
    }
    
    cout << "\nHour    Distance Traveled" << endl;
    cout << "--------------------------------------" << endl;
    
    //Map inputs to outputs or process the data
    for (int i = 1; i <= hrsTvld; i++)
    {
     distance = i * mph;
     cout << " " << i << "            " << distance << " miles" << endl;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}