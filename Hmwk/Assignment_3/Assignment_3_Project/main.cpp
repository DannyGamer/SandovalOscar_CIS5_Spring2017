/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on March 20, 2017, 5:28 PM
 * Purpose:  Determine the larger and smaller numbers.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    cout << "Problem 1" << endl;
    //Declare variables
    int number1; //Value for the first number
    int number2; //Value for the second number
    int larger;
    int smaller;
    
    //Input data
    cout << "This program will determine the minimum and "
            "maximum value between two given numbers" << endl;
    cout << "Input the first number: ";
    cin >> number1;
    cout << "Input the second number: ";
    cin >> number2;
    
    //Map inputs to outputs or process the data
    number1 > number2 ? (larger = number1, smaller = number2) 
                : (larger = number2, smaller = number1);
    
    cout << larger << " is larger." << endl;
    cout << smaller << " is smaller." << endl;
   
    
    
    
    
    /*
     * Problem 2 starts here
     */
    cout << "\n\n\nProblem 2" << endl;
    
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
    
    
    
    /*
     * Problem 3 starts here
     */
    cout << "\n\n\nProblem 3" << endl;
    
    //Declare variables
    int month; //Month in numeric form
    int day;   //Day of the month
    int year;  //Two-digit year
    
    //Input data
    cout << "This program will determine whether a date is magic or not." << endl;
    cout << "Input a month (in numeric form)" << endl;
    cin >> month;
    cout << "Input a day of the month (in numeric form)" << endl;
    cin >> day;
    if(!(day>=1&&day<=31))
    {
        cout<<"You failed to type a day between 1 and 31"<<endl;
        return 1;//Use DeMorgans Law to make clear
    }
    cout << "Input a year (only the last two digits)" << endl;
    cin >> year;
    
    //Map inputs to outputs or process the data
    if (year == month * day)  //Compare year to month times day
        cout << "The date is magic." << endl;
    else 
        cout << "The date is not magic." << endl;
    
    
    /*
     * Problem 4 starts here
     */
    cout << "\n\n\nProblem 4" << endl;
    
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
    
    
    
    
    
    /*
     * Problem 5 starts here
     */
    cout << "\n\n\nProblem 5" << endl;
    
    //Declare variables
    float weight; //Given weight in pounds
    int height;   //Given height in inches
    float BMI;    //Person's Body Mass Index dependent on the weight and height
    
    //Input data
    cout << "This program will calculate a person's Body Mass Index"
            " (BMI)" << endl;
    cout << "Input the weight (in pounds):" << endl;
    cin >> weight;
    cout << "Input the height (in inches):" << endl;
    cin >> height;
    
    //Map inputs to outputs or process the data
    BMI = weight * (703.0f / (height * height)); //Calculate the BMI
    
    //Output the transformed data
    cout<<fixed<<setprecision(1)<<showpoint;
    if (BMI < 18.5)
        cout << "The BMI is " << BMI << ". The person is underweight." << endl;
    else if (BMI >= 18.5 && BMI <= 25)
        cout << "The BMI is " << BMI << ". The person is optimal weight." << endl;
    else 
        cout << "The BMI is " << BMI << ". The person is overweight." << endl;
    
    
    
    /*
     * Problem 6 starts here
     */
    cout << "\n\n\nProblem 6" << endl;
    //Declare variables
    float mass;
    
    //Input data
    cout << "This program will convert an object's mass in kilograms"
            " to its weight in newtons." << endl;
    cout << "Input the object's mass (in kilograms):" << endl;
    cin >> mass;
    
    //Map inputs to outputs or process the data
    weight = mass * 9.8; //Calculate area of rectangle 1
    if (weight > 1000)
        cout << "The object's weight is " << weight << " newtons. "
                "It is too heavy." << endl;
    else if (weight < 10)
        cout << "The object's weight is " << weight << " newtons. "
                "It is too light." << endl;
    else 
        cout << "The object's weight is " << weight << " newtons." << endl;
    
    
    
    /*
     * Problem 7 starts here
     */
    cout << "\n\n\nProblem 7" << endl;
    
    //Declare variables
    const int  MINUTE=60;       //How many seconds in a minute
    const int  HOUR=60*MINUTE;  //How many seconds in an hour
    const int  DAY=24*HOUR;     //How many seconds in a day
    const int  WEEK=7*DAY;      //How many seconds in a week
    const int  YEAR=52*WEEK;    //How many seconds in a year
    int nSecs; //Number of seconds to convert
    int nYrs,nMnths,nWks,nDys,nHrs,nMin; //Number of
    
    //Initialize variables
    cout<<"This program converts seconds to Years/Months/Weeks/Days/Hours"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    
    //Map inputs to outputs or process the data
    nYrs=nSecs/YEAR;           //Number of Years
    cout<<nYrs<<" Years (";
    nSecs-=nYrs*YEAR;         //SUbtract the yearly seconds from remaining
    
    nWks=nSecs/WEEK;          //Number of weeks
    cout<<nWks<<" Weeks or ";
    nMnths=nWks*3/13;         //Convert number of weeks to months
    cout<<nMnths<<" Months) ";
    nSecs-=nWks*WEEK;         //Subtract the weekly seconds from remaining
    
    nDys=nSecs/DAY;           //Number of days
    cout<<nDys<<" Days ";
    nSecs-=nDys*DAY;          //Subtract the daily seconds from remaining
    
    nHrs=nSecs/HOUR;          //Number of hours
    cout<<nHrs<<" Hours ";
    nSecs-=nHrs*HOUR;         //Subtract the hourly seconds from remaining
    
    nMin=nSecs/MINUTE;        //Number of minutes
    cout<<nMin<<" Minutes ";
    
    nSecs-=nMin*MINUTE;       //Remaining number of seconds
    cout<<nSecs<<" Seconds";
    
    
    
    
    /*
     * Problem 8 starts here
     */
    cout << "\n\n\nProblem 8" << endl;
    
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
    
    
    
    /*
     * Problem 9 starts here
     */
    cout << "\n\n\nProblem 9" << endl;
    
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
    
    
    
    
    
    /*
     * Problem 10 starts here
     */
    cout << "\n\n\nProblem 10" << endl;
    
    //Declare variables
    bool x,y;
    
    //Output the table Header
    cout<<"X  Y !X !Y  X||Y  X&&Y  X^Y  X^Y^Y  X^Y^X  !(X||Y)  !X&&!Y  !(X&&Y)  !X||!Y"<<endl;
    
    //Determine first row in the table
    x=true;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<endl;
    
    //Determine second row in the table
    x=true;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<endl;
    
    //Determine third row in the table
    x=false;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<endl;
    
    //Determine fourth row in the table
    x=false;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<endl;
    
    
    //Exit stage right!
    return 0;
}

