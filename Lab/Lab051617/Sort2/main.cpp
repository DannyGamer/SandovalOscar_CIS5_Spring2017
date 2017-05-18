/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 15th, 2017, 10:03 AM
 * Purpose:  Sorting without array
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a = 5;
    int b = 3;
    int c = 7;
    int d = 4;
    int first;
    int second;
    int third;
    int fourth;
    
    //Input or initialize values Here
    if (a < b && a < c && a < d && b < c && b < d && c < d)
    {
        first = a;
        second = b;
        third = c;
        fourth = d;
    }
    if (a < b && a < c && a < d && b < c && b < d && d < c)
    {
        first = a;
        second = b;
        third = d;
        fourth = c;
    }
    if (a < b && a < c && a < d && c < b && c < d && b < d)
    {
        first = a;
        second = c;
        third = b;
        fourth = d;
    }
    if (a < b && a < c && a < d && c < b && c < d && d < b)
    {
        first = a;
        second = c;
        third = d;
        fourth = b;
    }
    else if (b < a && b < c && c < a)
    {
        first = b;
        second = c;
        third = a;
    }
    else if (c < a && c < b && b < a)
    {
        first = c;
        second = b;
        third = a;
    }
    else if (c < a && c < b && a < b)
    {
        first = c;
        second = a;
        third = b;
    }
    
    //Process/Calculations Here
    
    //Output Located Here
    cout << "First number is " << first << ", second number is " << second << ", third "
            "number is " << third << endl;

    //Exit
    return 0;
}

