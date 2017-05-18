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

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a = 5;
    int b = 3;
    int c = 7;
    int first;
    int second;
    int third;
    
    //Input or initialize values Here
    if (a <= b && a <= c && b <= c)
    {
        first = a;
        second = b;
        third = c;
    }
    else if (a <= b && a <= c && c <= b)
    {
        first = a;
        second = c;
        third = b;
    }
    else if (b <= a && b <= c && a <= c)
    {
        first = b;
        second = a;
        third = c;
    }
    else if (b <= a && b <= c && c <= a)
    {
        first = b;
        second = c;
        third = a;
    }
    else if (c <= a && c <= b && b <= a)
    {
        first = c;
        second = b;
        third = a;
    }
    else if (c <= a && c <= b && a <= b)
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