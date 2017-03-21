/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 8:57 PM
 * Purpose:  Calculate the points a person will receive for books purchased
 *           in a month
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
    int books; //Books purchased in a month
    int points; //Number of points awarded in a month
    
    //Input data
    cout << "This program will calculate the points a person will "
            "receive at Serendipity Booksellers based on the books "
            "purchased during a month." << endl;
    cout << "Enter the number of books you purchased this month:" << endl;
    cin >> books;
    
    if (books < 0)
    {
        cout << "Sorry, you cannot buy a negative amount of books. "
                "Try again." << endl;
        return 1;
    }
    
    //Map inputs to outputs or process the data
    switch (books)
    {
        case 0:  
            points = 0;
            break;
        case 1:  
            points = 5;
            break;
        case 2:  
            points = 15;
            break;
        case 3:  
            points = 30;
            break;
        default: 
            points = 60;
    }
    
    //Output the transformed data
    cout << "For purchasing " << books << " book(s) this month, you will "
            "receive " << points << " points." << endl;
    
    //Exit stage right! 
    return 0;
}
