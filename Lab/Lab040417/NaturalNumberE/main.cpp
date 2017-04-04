/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 4, 2017, 12:04 PM
 * Purpose: Create factorial
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
    //for (int j = 1; j <= 6; j++)
    //{
        float fact = 1;
        int n;
        float sum = 0;
        int start = 1;
        float end;
        float divide = 0;
    //}
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate a factorial for a given number." << endl;
    cout << "Input the number:";
    cin >> n;
    
    //Map inputs to outputs or process the data
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        divide = (1/fact);
        sum += divide;
        end = start + sum;
    }
    
    //Output the transformed data
    cout << end << endl;
    
    //Exit stage right!
    return 0;
}

