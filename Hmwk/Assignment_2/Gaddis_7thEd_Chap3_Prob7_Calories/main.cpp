/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 9, 2017, 9:35 PM
 * Purpose: Calculate the total number of calories consumed from cookies.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and initialize variables
    int   bag=40,
          nCookie,      //Number of cookies eaten by user        
          serving=10,  //Number of cookies per serving in the bag of cookies
          cals=300,   //Number of calories per serving
          cCookie;    //Calories per cookie
    float totlCal;    //Total number of calories
    
    
    //Input data
    cout<<"This program will calculate the total amount of calories"
            " consumed from cookies."<<endl;
    cout<<"The bag of cookies holds 40 cookies."<<endl;
    cout<<"How many cookies did you eat from the bag?"<<endl;
    cin>>nCookie;
    
    //Map inputs to outputs or process the data
    
    // Gets the number of calories per cookie.
    cCookie=cals/(bag/serving);
    totlCal=nCookie * cCookie;
    
    // Gets the number of servings eaten by the user.
    //totlCal=((float)nCookie/(bag/serving)) * cals;
    
    //Output the transformed data
    cout<<"The total number of calories consumed from cookies is "
            <<totlCal<<endl;
   
    //Exit stage right!
    return 0;
}

