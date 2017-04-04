/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 30, 2017, 10:27 AM
 * Purpose: Display the ASCII character set 
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
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    for(int i = 0; i <= 127; i++)
    {
        cout << static_cast<char>(i);
        if(i%16 == 15) cout << endl;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}