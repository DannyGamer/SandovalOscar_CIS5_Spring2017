/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 15th, 2017, 11:30 PM
 * Purpose:  Assignment 6 Problems
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Formatting
#include <string>   //For strings

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do
    {
        //Display Menu
        cout << endl << endl << "Type 0 to exit" << endl;
        cout << "Type 1 for Largest/Smallest Array Values" << endl;
        cout << "Type 2 for Rainfall Statistics" << endl;
        cout << "Type 3 for Chips and Salsa" << endl;
        cout << "Type 4 for Monkey Business" << endl;
        //cout << "Type 5 for Membership Fees Increase Problem" << endl;
        //cout << "Type 6 for Distance Traveled Problem" << endl;
        //cout << "Type 7 for Pennies for Pay Problem" << endl;
        //cout << "Type 8 for Math Tutor Problem" << endl;
        //cout << "Type 9 for Check Your Weight Problem" << endl << endl;
        
        //Input the choice
        cout << "Problem ";
        cin >> choice;
        cout << endl;
        
        //Place solutions to problems in switch statement
        switch(choice)
        {
            case '1': prob1(); 
            break;
            case '2': prob2();
            break;
            case '3': prob3();
            break;
            case '4': prob4();
            break;
//            case '5': prob5();
//            break;
//            case '6': prob6();
//            break;
//            case '7': prob7();
//            break;
//            case '8': prob8();
//            break;
//            case '9': prob9();
//            break;
//            case '10': prob10();
//            break;
        }
    }while(choice >= '1' && choice <= '4');
    
    //Exit stage right!
    return 0;
}
    
void prob1()
{
 //Declare variables
    const int SIZE = 10;
    float array[SIZE];
    
    //Input data
    cout << "This program will calculate the highest and lowest values from "
            "a set of values that you input." << endl;
    
    cout << "Input 10 values, each separated by a space: ";
    for(int i = 0; i < SIZE; i++)
        cin >> array[i];
    
    // Find the highest value in the array
    int highest = array[0];
    for(int count = 1; count < SIZE; count++)
    {
        if(array[count] > highest)
            highest = array[count];
    }
    
    // Find the lowest value in the array
    int lowest = array[0];
    for(int low = 1; low < SIZE; low++)
    {
        if(array[low] < lowest)
            lowest = array[low];
    }
    
    //Output the transformed data
    cout << "The highest value is " << highest << endl;
    cout << "The lowest value is " << lowest << endl;
}

void prob2()
{
//Declare variables
    const int SIZE = 12;
    float month[SIZE];
    float total = 0;
    float average;
    int number;
    int number2;
    
    //Input data
    cout << "This program will calculate different rainfall statistics "
            "based on information that you input." << endl;
    
    for(int i = 0; i < SIZE; i++)
    {
        do
        {
            cout << "Input the total rainfall for month " << i + 1 << ": ";
            cin >> month[i];
            if (month[i] < 0)
                cout << "Invalid input. Enter a positive number." << endl;
        } while(month[i] < 0) ;
    }
    
    // Calculate total rainfall in the year
    for(int i = 0; i < SIZE; i++)
        total += month[i];
    
    // Calculate average monthly rainfall
    average = total / SIZE;
    
    //Find months with the highest and lowest amounts
    int highest = month[0];
    for(int count = 1; count < SIZE; count++)
    {
        if(month[count] > highest)
        {
            highest = month[count];
            number = count;
        }
    }
    
    // Find the lowest value in the array
    int lowest = month[0];
    for(int low = 1; low < SIZE; low++)
    {
        if(month[low] < lowest)
        {
            lowest = month[low];
            number2 = low;
        }
    }
    
    //Output the transformed data
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The total rainfall in the year is " << total << endl;
    cout << "The average monthly rainfall is " << average << endl;
    cout << "Month " << number + 1 << " is the the month with the highest amount of "
            "rainfall with an amount of " << highest << endl;
    cout << "Month " << number2 + 1 << " is the the month with the lowest amount of "
            "rainfall with an amount of " << lowest << endl;
}


void prob3()
{
//Declare variables
    const int SIZE = 5;
    int sold[SIZE];
    string name[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    float total = 0;
    int number;
    int number2;
    
    //Input data
    cout << "This program will calculate sales for different salsa types during "
            "a month based on information that you input." << endl;
    
    for(int i = 0; i < SIZE; i++)
    {
        do
        {
            cout << "Input the number of jars of " << name[i] << " salsa sold "
                    "in the past month: ";
            cin >> sold[i];
            if (sold[i] < 0)
                cout << "Invalid input. Enter a positive number." << endl;
        } while(sold[i] < 0) ;
    }
    
    // Calculate total sales of all salsa types in the past month
    for(int i = 0; i < SIZE; i++)
        total += sold[i];
    
    //Find months with the highest and lowest amounts
    int highest = sold[0];
    for(int count = 1; count < SIZE; count++)
    {
        if(sold[count] > highest)
        {
            highest = sold[count];
            number = count;
        }
    }
    
    // Find the lowest value in the array
    int lowest = sold[0];
    for(int low = 1; low < SIZE; low++)
    {
        if(sold[low] < lowest)
        {
            lowest = sold[low];
            number2 = low;
        }
    }
    
    //Output the transformed data
    cout << "\nThe number of jars sold of each salsa type are:" << endl;
    for(int i = 0; i < SIZE; i++)
        cout << name[i] << ": " << sold[i] << endl;
    
    cout << "\nThe total number of jars sold is " << total << endl;
    cout << "The " << name[number] << " salsa sold the highest amount of "
            "jars with an amount of " << highest << endl;
    cout << "The " << name[number2] << " salsa the lowest amount of "
            "jars with an amount of " << lowest << endl;
}

void prob4()
{
//Declare variables
    const int MONKEY = 3;
    const int DAYS = 7;
    int data[MONKEY] [DAYS];
    float total = 0;
    float average;
    int number;
    int number2;
    int total1 = 0;
    int total2 = 0;
    int total3 = 0;
    int highest;
    int lowest;
    
    //Input data
    cout << "This program will create a report of food eaten by three monkeys "
            "based on information that you input." << endl;
    
    for(int i = 0; i < MONKEY; i++)
    {
        for(int j = 0; j < DAYS; j++)
        {
            do
            {
                cout << "Input the number of pounds of food that monkey " 
                     << i + 1 << " ate during day " << j + 1 << ": ";
                cin >> data[i] [j];
                if (data[i] [j] < 0)
                    cout << "Invalid input. Enter a positive number." << endl;
            } while(data[i] [j] < 0) ;
        }
        cout << endl;
    }
    
    // Calculate total amount of food eaten by whole family of monkeys
    for(int i = 0; i < DAYS; i++)
    {
        total = 0;
        for(int j = 0; j < MONKEY; j++)
            total += data[j] [i];
        
        // Calculate average amount of food eaten per day by the whole family of monkeys
        average = total / MONKEY;
        cout << "The average amount of food eaten in day " << i + 1 << " by the "
                "whole family of monkeys is " << average << " pounds." << endl;
    }
    
    
    //Find the highest and lowest amounts
    for(int i = 0; i < MONKEY; i++)
    {
        for(int j = 0; j < DAYS; j++)
        {
            if(i == 0)
                total1 += data[i] [j];
            else if(i == 1)
                total2 += data[i] [j];
            else
                total3 += data[i] [j];
        }
    }
    if(total1 > total2 && total1 > total3)
    {
        highest = total1;
        number = 1;
    }
    else if(total2 > total1 && total2 > total3)
    {
        highest = total2;
        number = 2;
    }
    else
    {
        highest = total3;
        number = 3;
    }
    
    cout << "\nMonkey " << number << " ate the highest amount of "
            "food during the week with an amount of " << highest << endl;
    total1 = 0;
    total2 = 0;
    total3 = 0;
    // Find the lowest value in the array
    for(int i = 0; i < MONKEY; i++)
    {
        for(int j = 0; j < DAYS; j++)
        {
            if(i == 0)
                total1 += data[i] [j];
            else if(i == 1)
                total2 += data[i] [j];
            else
                total3 += data[i] [j];
        }
    }
    if(total1 < total2 && total1 < total3)
    {
        lowest = total1;
        number2 = 1;
    }
    else if(total2 < total1 && total2 < total3)
    {
        lowest = total2;
        number2 = 2;
    }
    else
    {
        lowest = total3;
        number2 = 3;
    }
    
    cout << "Monkey " << number2 << " ate the lowest amount of "
            "food during the week with an amount of " << lowest << endl;
}

void prob5()
{

}

void prob6()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose:
 */
}

void prob7()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose:
 */
}

void prob8()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose:
 */
}

void prob9()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose:
 */
}

void prob10()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose:
 */
}