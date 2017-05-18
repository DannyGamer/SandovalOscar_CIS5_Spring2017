/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 16th, 2017, 11:31 AM
 * Purpose: Create a llnear search
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int linSrch(int [], int, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 12;
    int array[SIZE] = {0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};
    int value = 1;
    
    //Initialize variables
    
    //Input data
    linSrch(array, SIZE, value);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

linSrch(int array[],int SIZE, int value)
{
    for(int index = 0; index < SIZE; index++)
    {
        if(array[index] == value)
        {
            cout << "The value 1is found at position " << index + 1 << endl;
        }
    }
}