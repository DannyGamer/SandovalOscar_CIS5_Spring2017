/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 5th, 2017, 11:02 PM
 * Purpose:  Assignment 5 Problems
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>  //Random number generator
#include <ctime>    //Set the random number seed
#include <iomanip>  //Formatting
#include <string>   //For strings

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void prob1();
float calRtail(float, float);
void prob2();
float getSale(float);
void highest(float, float, float, float);
void prob3();
int accidnt(int);
void lowest(int, int, int, int, int);
void prob4();
float falling(float, float, float);
void prob5();
float kinetic(float, float);
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
            case '1': prob1(); 
            break;
            case '2': prob2();
            break;
            case '3': prob3();
            break;
            case '4': prob4();
            break;
            case '5': prob5();
            break;
            case '6': prob6();
            break;
            case '7': prob7();
            break;
            case '8': prob8();
            break;
            case '9': prob9();
            break;
            case '10': prob10();
            break;
        }
    }while(choice >= '1' && choice <= '9');
    
    //Exit stage right!
    return 0;
}
    
void prob1()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 5th, 2017, 3:02 PM
 * Purpose: Calculate markup price of an item
 */
 float cost;
 float markup;
 float price;
 cout << "This program will calculate an item's markup price." << endl;
 do
 {
  cout << "Enter the item's wholesale cost: ";
  cin >> cost;
  if (cost < 0)
   cout << "Invalid input. Enter a positive number." << endl;
 } while (cost < 0);
 do
 {
  cout << "Enter the markup percentage: ";
  cin >> markup;
  if (markup < 0)
   cout << "Invalid input. Enter a positive number." << endl;
 } while (markup < 0);
 markup = markup / 100.0f;
 price = calRtail(cost, markup);
 cout << fixed << setprecision(2);
 cout << endl << "The item's retail price is $" << price << endl;
}
    
float calRtail(float cost, float markup)
{
 float price;
 price = (cost * markup) + cost;
 return price;
}

void prob2()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 5th, 2017, 5:15 PM
 * Purpose: Determine winning division
 */
 float ne;
 float se;
 float nw;
 float sw;
 float name;
 name = 0;
 cout << "This program will determine the highest grossing division from 4 different divisions." << endl << endl;
 cout << endl << "Northeast" << endl;
 ne = getSale(name);
 cout << endl << "Southeast" << endl;
 se = getSale(name);
 cout << endl << "Northwest" << endl;
 nw = getSale(name);
 cout << endl << "Southwest" << endl;
 sw = getSale(name);
 highest(ne, se, nw, sw);

}

float getSale(float name)
{
 float sales;
 do
 {
  cout << "Input the division's quarterly sales figure: ";
  cin >> sales;
  if (sales < 0)
   cout << "Invalid input. Please enter a number greater than or equal to 0." << endl << endl;
 } while (sales < 0);
 return sales;
}

void highest(float ne, float se, float nw, float sw)
{
 if (ne > se && ne > nw && ne > sw)
  cout << "\nThe Northeast division is the highest grossing division with a quarterly sales figure of $" << ne << endl;
 else if (se > ne && se > nw && se > sw)
  cout << "\nThe Southeast division is the highest grossing division with a quarterly sales figure of $" << se << endl;
 else if (nw > se && nw > ne && nw > sw)
  cout << "\nThe Northwest division is the highest grossing division with a quarterly sales figure of $" << nw << endl;
 else
  cout << "\nThe Southwest division is the highest grossing division with a quarterly sales figure of $" << sw << endl;
}

void prob3()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 5th, 2017, 7:30 PM
 * Purpose: Determine safest driving area
 */
 int north;
 int south;
 int east;
 int west;
 int central;
 int name;
 name = 0;
 cout << "This program will determine the highest grossing division from 4 different divisions." << endl << endl;
 cout << endl << "North" << endl;
 north = accidnt(name);
 cout << endl << "South" << endl;
 south = accidnt(name);
 cout << endl << "East" << endl;
 east = accidnt(name);
 cout << endl << "West" << endl;
 west = accidnt(name);
 cout << endl << "Central" << endl;
 central = accidnt(name);
 lowest(north, south, east, west, central);

}

int accidnt(int name)
{
 float accdnts; //Number of automobile accidents reported in region during last year
 do
 {
  cout << "Input the division's quarterly sales figure: ";
  cin >> accdnts;
  if (accdnts < 0)
   cout << "Invalid input. Please enter a number greater than or equal to 0." << endl << endl;
 } while (accdnts < 0);
 return accdnts;
}

void lowest(int north, int south, int east, int west, int central)
{
 if (north > south && north > east && north > west && north > central)
  cout << "\nThe North division is the division with the lowest amount of automobile accidents with a number of " << north << "accidents that occured in the past year." << endl;
 else if (south > north && south > east && south > west && south > central)
  cout << "\nThe South division is the division with the lowest amount of automobile accidents with a number of " << south << "accidents that occured in the past year." << endl;
 else if (east > south && east > north && east > west && east > central)
  cout << "\nThe East division is the division with the lowest amount of automobile accidents with a number of " << east << "accidents that occured in the past year." << endl;
 else if (west > south && west > east && west > north && west > central)
  cout << "\nThe West division is the division with the lowest amount of automobile accidents with a number of " << west << "accidents that occured in the past year." << endl;
 else
  cout << "\nThe Central division is the division with the lowest amount of automobile accidents with a number of " << central << "accidents that occured in the past year." << endl;
}

void prob4()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 5th, 2017, 7:46 PM
 * Purpose: Find distance an object falls in a range of time
 */
 float d = 0;          //Distance (in meters) that the object has fallen
 float g = 9.8;  //Distance per second an object falls due to gravity
 float t = 0;          //Time (in seconds) that the object falls
 cout << endl << "This program calculates the distance an object falls during the time range of 1-10 seconds." << endl << endl;
 for (int i = 1; i <= 10; i++)
 {
  t = i;
  d = falling(d, g, t);
  cout << fixed << setprecision(2);
  cout << "The object has fallen " << setw(6) << d << " meters in " << t << " seconds." << endl;
 }
}

float falling(float d, float g, float t)
{
 d = (1.0f / 2.0f) * g * t * t;
 return d;
}

void prob5()
{
 /*
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 5th, 2017, 8:09 PM
 * Purpose:
 */
 float ke = 0;   //Kinetic Energy of object
 float m;  //Mass (in kg) of object
 float v;    //Velocity (in m/s) of object
 cout << endl << "This program calculates an object's Kinetic Energy." << endl << endl;
 cout << "Input the mass (in kg) of the object: ";
 cin >> m;
 cout << "Input the object's velocity (in m/s): ";
 cin >> v;
 ke = kinetic(m, v);
 cout << "The object's Kinetic Energy is " << ke << " Joules." << endl;
}

float kinetic(float m, float v)
{
 float ke;
 ke = (1.0f / 2.0f) * m * v * v; //Calculate Kinetic Energy
 return ke;
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