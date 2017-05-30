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
void filAray(int [],int [], int);
void prntAry(int [],int, int);
void prntAry(int [],int [], int , int);
void mrkSort(int [], int [], int);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE = 100;
    int index[SIZE] = {};
    int array[SIZE] = {};
    
    //Input data
    filAray(array, index, SIZE);
    cout << "Before Sorting" << endl;
    cout << "The original Array to be sorted" << endl;
    prntAry(array, SIZE, 10);
    cout << "The indexed array" << endl;
    prntAry(index, SIZE, 10);
    cout << "The array printed out using the indexed array" << endl;
    prntAry(array, index, SIZE, 10);
    
    //Map Inputs to Outputs or process the data
    mrkSort(array, index, SIZE);
    
    //Output the transformed data
    cout << "After Sorting" << endl;
    cout << "The original Array to be sorted" << endl;
    prntAry(array, SIZE, 10);
    cout << "The indexed array" << endl;
    prntAry(index, SIZE, 10);
    cout << "The array printed out using the indexed array" << endl;
    prntAry(array, index, SIZE, 10);

    //Exit stage right!
    return 0;
}

void filAray(int a[],int indx[], int n)
{
    for(int index = 0; index < n; index++)
    {
        a[index] = rand() % 90 + 10; //FIll with 2 digit number
        indx[index] = index;
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

void prntAry(int a[], int indx[], int n, int perLine)
{
    cout << endl;
    for(int index = 0; index < n; index++)
    {
        //Output numbers by ten per line
        cout << a[indx[index]] << " ";
        if(index % perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl;
}

void mrkSort(int a[], int indx[], int n)
{
    for(int pos = 0; pos < n - 1; pos++)
    {
        for(int index = pos + 1; index < n; index++)
        {
            if(a[indx[pos]] > a[indx[index]])
            {
                int temp = a[pos];
                    indx[pos] = indx[index];
                    indx[index] = temp;
            }
        }
    }
}