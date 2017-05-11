/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 11th, 2017, 10:18 AM
 * Purpose:  Mark's Sort
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time to set the seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int, int);
//void swap1(int &, int &);
//void swap2(int &, int &);
void smlstVl(int [], int &, int, int);
void mrkSort(int [], int);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE = 100;
    int array[SIZE] = {};
    
    //Input data
    filAray(array, SIZE);
    prntAry(array, SIZE, 10);
    
    //Map Inputs to Outputs or process the data
    mrkSort(array, SIZE);
    
    //Output the transformed data
    prntAry(array, SIZE, 10);

    //Exit stage right!
    return 0;
}

void filAray(int a[],int n)
{
    for(int index = 0; index < n; index++)
    {
        a[index] = rand() % 90 + 10; //FIll with 2 digit number
    }
}

void prntAry(int a[],int n, int perLine)
{
    cout << endl;
    for(int index = 0; index < n; index++)
    {
        //Output numbers by ten per line
        cout << a[index] << " ";
        if(index % perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl;
}

//void swap1(int &a, int &b)
//{
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}

void swap2(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}

void smlstVl(int a[], int n, int pos)
{
    for(int index = pos; index < n; index++)
    {
        if(a[pos] > a[index])
        {
            int temp = a[pos];
                a[pos] = a[index];
                a[index] = temp;
        }
    }
}

void mrkSort(int a[], int n)
{
    for(int pos = 0; pos < n - 1; pos++)
    {
        for(int index = pos + 1; index < n; index++)
        {
            if(a[pos] > a[index])
            {
                int temp = a[pos];
                    a[pos] = a[index];
                    a[index] = temp;
            }
        }
    }
}