/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 6:14 PM
 * Purpose:  Determine equality of rectangle areas.
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
    float length1; //Length value of rectangle 1
    float width1;  //Width value of rectangle 1
    float length2; //Length value of rectangle 2
    float width2;  //Length value of rectangle 2
    float area1; //Area of rectangle 1 for given width and length values
    float area2; //Area of rectangle 2 for given width and length values
    
    //Input data
    cout << "This program will determine whether the area of a rectangle"
            " is greater than, less than, or equal to the area"
            " of another rectangle." << endl;
    cout << "Input the length of the first rectangle:" << endl;
    cin >> length1;
    cout << "Input the width of the first rectangle:" << endl;
    cin >> width1;
    cout << "Input the length of the second rectangle:" << endl;
    cin >> length2;
    cout << "Input the width of the second rectangle:" << endl;
    cin >> width2;
    
    //Map inputs to outputs or process the data
    area1 = length1 * width1; //Calculate area of rectangle 1
    area2 = length2 * width2; //Calculate area of rectangle 2
    if (area1 > area2)
        cout << "Rectangle 1 has an area of " << area1 << " and is greater than"
                " the area of rectangle 2: " << area2 << endl;
    else if (area1 < area2)
        cout << "Rectangle 1 has an area of " << area1 << " and is less than"
                " the area of rectangle 2, which is " << area2 << endl;
    else 
        cout << "The area of rectangle 1 is equal to the area of rectangle 2."
             << endl;
    
    
    //Output the transformed data
    
    //Exit stage right! 
    return 0;
}
