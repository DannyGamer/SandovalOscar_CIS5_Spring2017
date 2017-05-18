/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 15th, 2017, 10:35 AM
 * Purpose:  Sorting without array
 */

//System Libraries Here
#include <iostream>
#include <fstream>  //Reading/writing to files
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(string, char [], int);   //Read the Answer Key and Student Responses
void wrtFile(string, int [], int);  //Write the results
void grade(char [], char [], int [], int); //Grade the file
int score(int [], int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input data
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

void rdFile(string fn, char a[], int n)
{
    //Declare variables
    ifstream in;
    int cnt = 0;
    
    //Open the file
    in.open(fn.c_str());
    
    //Read the values
    while(in >> a[cnt++]);
    
    //Close the file
    in.close();
}

void wrtFile(string fn, int pts[], int n)
{
    //Declare variables
    ofstream out;
    
    //Open the file
    out.open(fn.c_str());
    
    //Read the values
    for(int i = 0; i < n; i++)
    {
        out << pts[i] << endl;
    }
    
    //Close the file
    out.close();
}

void grade(char key[], char stu[], int pts[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(key[i] == stu[i])
            pts[i] = 1;
    }
}

int score(int pts[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += pts[i];
    }
    return sum;
}