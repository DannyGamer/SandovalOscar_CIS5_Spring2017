/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 6:33 PM
 * Purpose:  Convert numbers to Roman Numerals
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
    unsigned short number; //Integer scores valid from 1 to 10 
    string romanNo; //Converted number to Roman Numeral 
    
    //Input data
    cout << "This program converts numbers to Roman Numerals." << endl;
    cout << "The data type used is an integer [1-10]" << endl;
    cout << "Type in the number you want to convert:" << endl;
    cin >> number;
    if(!(number>=1&&number<=10)){
        cout<<"You failed to type an integer between 1 and 10"<<endl;
        return 1;//Use DeMorgans Law to make clear
    }
    
    //Map inputs to outputs or process the data
    switch(number)
    {
        case 10: 
            romanNo = "X"; 
            break;
        case  9: 
            romanNo = "IX"; 
            break;
        case  8: 
            romanNo = "VIII"; 
            break;
        case  7: 
            romanNo = "VII"; 
            break;
        case  6: 
            romanNo = "VI"; 
            break;
        case  5: 
            romanNo = "V"; 
            break;
        case  4: 
            romanNo = "IV"; 
            break;
        case  3: 
            romanNo = "III";
            break;
        case  2:
            romanNo = "II"; 
            break;
        default: 
            romanNo = "I";
            break;
    }
    
    //Output the transformed data
    cout << "The number "<< number << " is " << romanNo << " in Roman Numerals." 
         << endl;
    
    //Exit stage right! 
    return 0;
}
