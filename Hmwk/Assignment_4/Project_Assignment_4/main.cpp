/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 3, 2017, 11:02 PM
 * Purpose:  Menu to be utilized on Assignment 4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>  //Random number generator
#include <ctime>    //Set the random number seed
#include <iomanip>  //Formatting

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float MSSEARTH = 5.972e27f; //Mass of earth in grams
const float GCONST = 6.673e-8f;   //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM = 1.0f / 30.48f; //Conversion from ft to cm
const float CNVMFT = 5280.0f;        //Conversion from miles to feet
const float RADERTH = 3959;          //Radius of the Earth in miles

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
        cout << "Type 1 for Sum of Numbers Problem" << endl;
        cout << "Type 2 for Characters for the ASCII Codes Problem" << endl;
        cout << "Type 3 for Ocean Levels Problem" << endl;
        cout << "Type 4 for Calories Burned Problem" << endl;
        cout << "Type 5 for Membership Fees Increase Problem" << endl;
        cout << "Type 6 for Distance Traveled Problem" << endl;
        cout << "Type 7 for Pennies for Pay Problem" << endl;
        cout << "Type 8 for Math Tutor Problem" << endl;
        cout << "Type 9 for Check Your Weight Problem" << endl << endl;
        
        //Input the choice
        cout << "Problem ";
        cin >> choice;
        
        //Place solutions to problems in switch statement
        switch(choice)
        {
            case '1':
            {
                //Declare variables
                int number;  //Number up to which the numbers will sum
                int sum = 0;  //Sum of the numbers
                int i = 1;   //Starting with value of 1

                //Initialize variables

                //Input data
                cout << "This program will calculate the sum of the numbers up "
                        "to a given number." << endl;
                cout << "Please input a positive integer value for the number to "
                        "which you want to sum:" << endl;
                cin >> number;

                if (number < 0)
                {
                    cout << "The number is invalid. Please input a positive integer "
                            "value." << endl;
                    return 1;
                }

                //Map inputs to outputs or process the data
                for (i; i <= number; i++)  //Loop that will sum all the numbers up to the given number
                {
                    sum += i;
                }

                //Output the transformed data
                cout << "The computed sum of 1 to " << number << " is " << sum << endl;
                
                break;
            }
            case '2':
            {
                //Declare and initialize variables
                for(int i = 0; i <= 127; i++)
                {
                    cout << static_cast<char>(i);
                    if(i%16 == 15) cout << endl;
                }
                
                break;
            }
            case '3':
            {
                //Declare variables
                float rise = 1.5f;  //Ocean's level rises at 1.5 mm per year
                float sum = 0.0f;
                int end = 25;  //will give the 
                int i = 1;   //Starting with value of 1

                //Initialize variables

                //Input data
                cout << "This program will calculate the level the ocean rises "
                        "per year for 25 years."
                     << endl;
                cout << "The ocean's level rises 1.5 mm per year." << endl
                     << endl;
                cout << "Year         Level " << endl;
                cout << "---------------------" << endl;

                //Map inputs to outputs or process the data
                for (i; i <= end; i++)  //Loop that will sum all the numbers up to the given number
                {
                    sum = sum + rise;
                    cout << " " << i << "           " << sum << " mm" << endl;
                }
                
                break;
            }
            case '4':
            {
                //Declare variables
                float cal = 3.9f; //Calories burned per minute
                float sum = 0;    //Sum of calories burned per minute
                int endtime = 30; //30 minutes - Ending value for calculation
                int minutes = 5;

                //Initialize variables

                //Input data
                cout << "This program will calculate the calories burned in a treadmill per 5 minute interval for 30 minutes." << endl;

                //Map inputs to outputs or process the data
                for (int i = 5; i <= endtime; i += minutes)
                {
                 sum += (cal * minutes);
                 cout << "The calories burned after " << i << " minutes are " << sum << endl;
                }
                
                break;
            }
            case '5':
            {
                //Declare variables
                float price = 2500; //Money charged per year four country club in $
                float percent = 0.04f; //4% increase per year i membership price
                int endyear = 6; //6 years - Ending value for calculation
                float rate;      //Rate at which the price will increase - (Price * 4%)

                //Initialize variables

                //Input data
                cout << "This program will calculate and display a table for the price "
                        "for a membership to a country club" << endl;
                cout << "in the next 6 years, given that the price will "
                        "increase by 4% each year." << endl << endl;
                cout << "Year              Membership Price" << endl;
                cout << "----------------------------------------" << endl;

                //Map inputs to outputs or process the data
                for (int i = 1; i <= endyear; i++)
                {
                 rate = (price * percent);
                 price += rate;
                 cout << " " << i << "                     $" << price << endl;
                }
                
                break;
            }
            case '6':
            {
                //Declare variables
                int mph;       //Speed of vehicle in miles per hour
                int hrsTvld;  //Hours traveled in vehicle
                float distance;

                //Initialize variables

                //Input data
                cout << "This program will calculate the distance traveled by a vehicle." << endl;
                cout << "Please input the speed of the vehicle in mph:" << endl;
                cin >> mph;

                if (mph < 0)
                {
                 cout << "Invalid speed. Please input a positive number." << endl;
                 return 1;
                }

                cout << "Please input the number of hours traveled:" << endl;
                cin >> hrsTvld;

                if (hrsTvld < 1)
                {
                 cout << "Invalid time. Please input a number greater than 1." << endl;
                 return 1;
                }

                cout << "\nHour    Distance Traveled" << endl;
                cout << "--------------------------------------" << endl;

                //Map inputs to outputs or process the data
                for (int i = 1; i <= hrsTvld; i++)
                {
                 distance = i * mph;
                 cout << " " << i << "            " << distance << " miles" << endl;
                }
                
                break;
            }
            case '7':
            {
                //Declare variables
                int days;     //Number of days worked
                float salary = 1;    //Salary per day
                float edPriod = 0;  //Total salary at the end of the period
                int rate = 2;

                //Initialize variables

                //Input data
                cout << "This program will calculate the salary for a person during a time period as the salary doubles each day." << endl;
                cout << "Please input the number of days the person worked:" << endl;
                cin >> days;

                if (days < 1)
                {
                 cout << "Invalid number of days. Please input an integer greater than 1." << endl;
                 //return 1;
                }

                cout << "\nDay     Salary" << endl;
                cout << "-----------------" << endl;

                //Map inputs to outputs or process the data
                for (int i = 1; i <= days; i++)
                {
                 salary = salary * rate;
                 edPriod += salary;
                 cout << " " << i << "      $" << salary/100 << endl;
                }
                cout << "\nThe total salary for this period is $" << edPriod/100 << endl;
                
                break;
            }
            case '8':
            {
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare variables
                int op1;
                int op2;
                int result;
                int answer;
                char choice;

                //Input data
                do
                {
                    cout << "Math Tutor" << endl;
                    cout << "Choose the operation: "
                            "\n(*) for multiplication\n"
                            "(/) for division\n"
                            "(+) for summation\n"
                            "(-) for subtraction\n"
                            "or anything else to exit" << endl;
                    cin >> choice;
                    cout << endl << endl;
                    if(!(choice == '+' || choice == '-' || choice == '/' || choice == '*'))
                    {
                        cout << "Exit the Math Tutor" << endl;
                        exit(0);
                    }


                    //Map inputs to outputs or process the data
                    switch(choice)
                    {
                        case '+':
                        {
                            op1 = rand()%900 + 100; //[100-999]
                            op2 = rand()%900 + 100; //[100-999]
                            answer = op1 + op2; //[3 to 4 digit result]
                            break;
                        }
                        case '-':
                        {
                            op1 = rand()%900 + 100; //[100-999]
                            op2 = rand()%900 + 100; //[100-999]
                            answer = op1 - op2; //[0 to 3 digit result]
                            break;
                        }
                        case '*':
                        {
                            op1 = rand()%90 + 100; //[10-99]
                            op2 = rand()%90 + 100; //[10-99]
                            answer = op1 * op2; //[2 to 4 digit result]
                            break;
                        }
                        case '/':
                        {
                            answer = rand()%90 + 10; //[10-99]
                            op2 = rand()%90 + 10; //[10-99]
                            op1 = answer * op2; //[2 to 3 digit result]
                            break;
                        }
                        default: 
                        {
                            cout << "Bad operator" << endl;
                            return 1;
                        }
                    }

                    //Output the transformed data
                    cout << setw(8) << op1 << endl;
                    cout << choice << setw(7) << op2 << endl;
                    cout << "--------" << endl;
                    cin >> result;

                    //Compare the answer
                    cout << endl;
                    cout << ((result == answer)? "Correct!" : "Incorrect") << endl;
                    cout << "The answer = " << answer << endl << endl << endl;
                }while(choice == '+' || choice == '-' || choice == '/' || choice == '*');
                
                break;
            }
            case '9':
            {
                //Declare variables
                float myWeight;   //Result in lbs
                float myMass; //Units of slugs
                
                //Input Data
                cout << "This program will calculate your weight in lbs." << endl;
                cout << "Please input your mass in slugs:";
                cin >> myMass;

                //Map inputs to outputs or process the data
                myWeight = GCONST * CNVFTCM * CNVFTCM * CNVFTCM * MSSEARTH * myMass 
                         /(RADERTH * RADERTH * CNVMFT * CNVMFT);

                //Output the transformed data
                cout << "You weigh " << myWeight << " lbs" << endl;
    
                break;
            }
            default:
            {
                cout << "Exit the program" << endl;
            }
            
        }
    }while(choice >= '1' && choice <= '9');
    
    //Exit stage right!
    return 0;
}