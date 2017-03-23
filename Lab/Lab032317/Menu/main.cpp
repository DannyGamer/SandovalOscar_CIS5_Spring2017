/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 23, 2017, 12:07 PM
 * Purpose:  Menu to be utilized on Hmwk 4
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
    char choice;
    
    //Show menu and loop
    do
    {
        //Display Menu
        cout << endl << endl << "Type 0 to exit" << endl;
        cout << "Type 1 for Sum 1 to n Problem" << endl;
        cout << "Type 2 for Sum 0.1 error Problem" << endl;
        cout << "Type 3 for Problem 3" << endl;
        cout << "Type 4 for Problem 4" << endl;
        cout << "Type 5 for Problem 5" << endl;
        cout << "Type 6 for Problem 6" << endl;
        cout << "Type 7 for Problem 7" << endl;
        cout << "Type 8 for Problem 8" << endl;
        cout << "Type 9 for Problem 9" << endl << endl;
        
        //Input the choice
        cout << "Problem ";
        cin >> choice;
        
        //Place solutions to problems in switch statement
        switch(choice)
        {
            case '1':
            {
                //Declare and initialize variables
                //Make sure 0 <= n <= 40000
                int n = 40000;
                int sum = 0;

                //Map inputs to outputs or process the data
                for (int i = 1; i <= n; i++)
                {
                    sum+=i;
                }

                //Output the transformed data
                cout << "The computed sum of 1 to " << n << " = " << sum << endl;
                cout << "and " << n << "*(" << n << "+1)/2 = " << n * (n+1)/2 << endl;
                break;
            }
            case '2':
            {
                //Declare and initialize variables
                int nLoop = 10000000;
                float sum = 0.0f;
                float frac = 0.1f;

                //Map inputs to outputs or process the data
                for (int i = 1; i <= nLoop; i++)
                {
                    sum+=frac;
                }

                //Output the transformed data
                cout << "The computed sum of "
                     << frac << " -> " << nLoop << " times = " << sum << endl;
                cout << "Simple multiplication of " 
                     << frac << "x" << nLoop << " = " << frac * nLoop << endl;
                cout << "Error = " << (frac * nLoop - sum)/(frac * nLoop) * 100
                     << "%" << endl;
                break;
            }
            case '3':
            {
                cout << "In problem solution 3" << endl;
                break;
            }
            case '4':
            {
                cout << "In problem solution 4" << endl;
                break;
            }
            case '5':
            {
                cout << "In problem solution 5" << endl;
                break;
            }
            case '6':
            {
                cout << "In problem solution 6" << endl;
                break;
            }
            case '7':
            {
                cout << "In problem solution 7" << endl;
                break;
            }
            case '8':
            {
                cout << "In problem solution 8" << endl;
                break;
            }
            case '9':
            {
                cout << "In problem solution 9" << endl;
                break;
            }
            default:
            {
                cout << "Exit the program" << endl;
            }
            
        }
    }while(choice >= '1' && choice <= '9');
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

