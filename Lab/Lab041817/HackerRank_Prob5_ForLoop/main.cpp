/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose: Print string "Hello, WOrld!"
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int n;
    int total = 0;
    //int b;
    
    cin >> n;
    //cin >> b << endl;
    
    if (n >= 1 && n <= 9)
    {
        if (n == 1)
        {
            cout << "one" << endl;
        }
        else if (n == 2)
        {
            cout << "two" << endl;
        }
        else if (n == 3)
        {
            cout << "three" << endl;
        }
        else if (n == 4)
        {
            cout << "four" << endl;
        }
        else if (n == 5)
        {
            cout << "five" << endl;
        }
        else if (n == 6)
        {
            cout << "six" << endl;
        }
        else if (n == 7)
        {
            cout << "seven" << endl;
        }
        else if (n == 8)
        {
            cout << "eight" << endl;
        }
        else
        {
            cout << "nine" << endl;
        }
    }
    else if (n > 9)
    {
        for(int i = 0; i <= n; i++)
        {
            total += i;
        }
        if (total % 2 == 0)
            {
                cout << "The number is even." << endl;
            }
        else if (total % 2 == 1)
        {
            cout << "The number is odd." << endl;
        }
    }
    
    //Exit stage right!
    return 0;
}