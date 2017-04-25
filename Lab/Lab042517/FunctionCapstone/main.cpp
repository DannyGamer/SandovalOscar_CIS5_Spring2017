/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 25, 2017, 11:31 AM
 * Purpose: 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cmath>
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function  all Savings function for a Future Value
float fv1(float, float, int); //Present Value using Power Function
float fv2(float, float, int); //PV using Exponential and Log Function
float fv3(float, float, int); //PV using loops
float fv4(float, float, int = 12); //PV using a defaulted parameter and loops
float fv5(float, float, int); //PV using recursion
int   fv5(float, float, int, float &); //Static 
float fv7(float, float, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float pv; //Present Value $'s
    float ir; //Interest Rate in %
    int n;    //Number of compounding periods in year
    
    //Initialize variables
    pv = 100.0f;
    ir = 6;
    n = 72/ir;
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << fixed << setprecision (2) << showpoint;
    cout << "Present Value = $" << pv << endl;
    cout << "Interest Rate = " << ir << "%" << endl;
    cout << "Number of years = " << n << " years" << endl;
    cout << "Future Value Function 1 = $" << fv1(pv, ir/100, n) << endl;
    cout << "Future Value Function 2 = $" << fv2(pv, ir/100, n) << endl;
    cout << "Future Value Function 3 = $" << fv3(pv, ir/100, n) << endl;
    cout << "Future Value Function 4 = $" << fv4(pv, ir/100) << endl;
    cout << "Future Value Function 5 = $" << fv5(pv, ir/100, n) << endl;
   
    float fv;
    int loop = 9;
    for(int i = 1; i < loop; i++)fv5(pv, ir/100, n, fv);
    int funcCnt = fv5(pv, ir/100, n, fv);
    cout << "Future Value Function 6 = $" << fv << endl;
    cout << "The number of times this function was called = " << funcCnt << endl;
    cout << "Future Value Function 7 = $" << fv7(pv, ir/100, n) << endl;
    
    //Exit stage right!
    return 0;
}

float fv1(float p, float i, int n)
{
    return p * pow(1 + i, n);
}

float fv2(float p, float i, int n)
{
    return p * exp(n * log(1 + i));
}

float fv3(float p, float i, int n)
{
    for (int year = 1; year <= n; year++)
    {
        p *= (1 + i);
    }
    return p;
}

float fv4(float p, float i, int n)
{
    for (int year = 1; year <= n; year++)
    {
        p *= (1 + i);
    }
    return p;
}

float fv5(float p, float i, int n)
{
    if (n <= 0)
        return p;
    else
        return fv5(p, i, n-1) * (1 + i);
}

int   fv5(float p, float i, int n, float &fv)
{
    static int count = 1;
    fv = p;
    for (int year = 1; year <= n; year++)
    {
        fv *= (1 + i);
    }
    return count++;
}

float fv7(float p, float i, int n)
{
    int ip = p * 100; //In pennies
    p = ip;
    
    for(int year = 1; year <= n; year++)
    {
        p *= (1 + i);
        ip = p;
        p = ip;
    }
        return p / 100.0f;
}