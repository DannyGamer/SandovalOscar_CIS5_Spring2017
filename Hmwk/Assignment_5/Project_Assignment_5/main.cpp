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
float calRtal(float, float);
void prob2();
float getSale(string);
void highest(float, float, float, float);
void prob3();
int accidnt(string);
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
        cout << endl << endl << "Type 1 for Markup Problem" << endl;
        cout << "Type 2 for Winning Division Problem" << endl;
        cout << "Type 3 for Safest Driving Area Problem" << endl;
        cout << "Type 4 for Falling Distance Problem" << endl;
        cout << "Type 5 for Kinetic Energy Problem" << endl;
        cout << "Type anything else to exit." << endl;
        
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
            case '5': prob5();
            break;
            case '6': prob6();
            break;
            default:
                cout << "Exit the program" << endl;
        }
    }while(choice >= '1' && choice <= '5');
    
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
 price = calRtal(cost, markup);
 cout << fixed << setprecision(2);
 cout << endl << "The item's retail price is $" << price << endl;
}
    
float calRtal(float cost, float markup)
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
 string name;
 cout << "This program will determine the highest grossing division from 4 different divisions." << endl << endl;
 name = "Northeast";
 ne = getSale(name);
 name = "Southeast";
 se = getSale(name);
 name = "Northwest";
 nw = getSale(name);
 name = "Southwest";
 sw = getSale(name);
 highest(ne, se, nw, sw);

}

float getSale(string name)
{
 float sales;
 do
 {
  cout << "Input the " << name << " division's quarterly sales figure: ";
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
 string name = "North";
 int north;
 int south;
 int east;
 int west;
 int central;
 cout << "This program will determine the geographic region that had the fewest "
         "reported automobile accidents last year." << endl << endl;
 name = "North";
 north = accidnt(name);
 name = "South";
 south = accidnt(name);
 name = "East";
 east = accidnt(name);
 name = "West";
 west = accidnt(name);
 name = "Central";
 central = accidnt(name);
 lowest(north, south, east, west, central);

}

int accidnt(string name)
{
 float accdnts; //Number of automobile accidents reported in region during last year
 do
 {
  cout << "Input the " << name << " region's number of automobile accidents "
          "reported during the last year: ";
  cin >> accdnts;
  if (accdnts < 0)
   cout << "Invalid input. Please enter a number greater than or equal to 0." << endl << endl;
 } while (accdnts < 0);
 return accdnts;
}

void lowest(int north, int south, int east, int west, int central)
{
 if (north < south && north < east && north < west && north < central)
  cout << "\nThe North division is the division with the lowest amount of automobile\n"
          "accidents with a number of " << north << " accidents that occurred in the past year." << endl;
 else if (south < north && south < east && south < west && south < central)
  cout << "\nThe South division is the division with the lowest amount of automobile\n"
          "accidents with a number of " << south << " accidents that occurred in the past year." << endl;
 else if (east < south && east < north && east < west && east < central)
  cout << "\nThe East division is the division with the lowest amount of automobile\n"
          "accidents with a number of " << east << " accidents that occurred in the past year." << endl;
 else if (west < south && west < east && west < north && west < central)
  cout << "\nThe West division is the division with the lowest amount of automobile\n"
          "accidents with a number of " << west << " accidents that occurred in the past year." << endl;
 else
  cout << "\nThe Central division is the division with the lowest amount of automobile\n"
          "accidents with a number of " << central << " accidents that occurred in the past year." << endl;
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
 cout << "Meters fallen  |  Seconds" << endl;
 cout << "--------------------------------" << endl;
 for (int i = 1; i <= 10; i++)
 {
  t = i;
  d = falling(d, g, t);
  cout << fixed << setprecision(2);
  cout << setw(8) << d << "         " << setw(6) << t << endl;
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
 * Created on June 6th, 2017, 11:03 PM
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