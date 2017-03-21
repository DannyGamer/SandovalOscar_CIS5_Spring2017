/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 9:21 PM
 * Purpose:  Determine first, second, and third places in a race.
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
    string name1;  //Name of first runner
    string name2;  //Name of second runner
    string name3;  //Name of third runner
    float time1;   //Time it took first runner to run the race
    float time2;   //Time it took second runner to run the race
    float time3;   //Time it took third runner to run the race
    string first;  //Variable to hold name of first place
    string second; //Variable to hold name of second place
    string third;  //Variable to hold name of third place
    
    
    //Input data
    cout << "This program will determine who came in first, second, "
            "and third place based on the time it took 3 runners "
            "to finish the race" << endl;
    cout << "Enter the name of contestant 1:" << endl;
    cin >> name1;
    cout << "Enter the name of contestant 2:" << endl;
    cin >> name2;
    cout << "Enter the name of contestant 3:" << endl;
    cin >> name3;
    cout << "Enter the time (in seconds) it took contestant 1 "
            "to finish the race:" << endl;
    cin >> time1;
    cout << "Enter the time (in seconds) it took contestant 2 "
            "to finish the race:" << endl;
    cin >> time2;
    cout << "Enter the time (in seconds) it took contestant 3 "
            "to finish the race:" << endl;
    cin >> time3;
    
    if (time1 < 0 || time2 < 0 || time3 < 0)
    {
        cout << "The time is invalid. Please input a positive time." << endl;
        return 1;
    }
    
    //Map inputs to outputs or process the data
    if (time1 < time2 && time1 < time3)
    {
        first = name1;
        if (time2 < time3)
        {
            second = name2;
            third = name3;
        }
        else
        {
            second = name3;
            third = name2;
        }
    }
    else if (time2 < time1 && time2 < time3)
    {
        first = name2;
        if (time1 < time3)
        {
            second = name1;
            third = name3;
        }
        else
        {
            second = name3;
            third = name1;
        }
    }
    else if (time3 < time1 && time3 < time2)
    {
        first = name3;
        if (time1 < time2)
        {
            second = name1;
            third = name2;
        }
        else
        {
            second = name2;
            third = name1;
        }
    }
    
    //Output the transformed data
    cout << "The first place is " << first << endl;
    cout << "The second place is " << second << endl;
    cout << "The third place is " << third << endl;
    
    //Exit stage right! 
    return 0;
}
