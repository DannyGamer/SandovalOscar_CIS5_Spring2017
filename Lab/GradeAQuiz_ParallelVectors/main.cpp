/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 17th, 2017, 11:27 AM
 * Purpose:  Sorting without array
 */

//System Libraries Here
#include <iostream>  //Input - Output Library
#include <fstream>  //Reading/writing to files
#include <vector>   //The STL Vector -> Dynamic Array
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(char [], vector<char> &);   //Read the Answer Key and Student Responses
void wrtFile(string, vector<int> &);          //Write the results
void grade(vector<char> &, vector<char> &, vector<int> &); //Grade the file
int score(vector<int> &);                    //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 20;
    vector<char> key(SIZE);
    vector<char> stuResp(SIZE);
    vector<int> scr(SIZE);
    string scoreFn;
    
    //Initialize string variables 
    char keyFnC[] = "key.dat"; 
    char stuRFnC[] = "answer.dat"; 
    scoreFn = "result.dat"; 

    //Input data 
    rdFile(keyFnC, key); 
    rdFile(stuRFnC, stuResp); 

    //Map inputs to outputs or process the data 
    grade(key, stuResp, scr); 

    //Output the transformed data 
    cout << "Your Test result score was = " << score(scr) << endl; 
    wrtFile(scoreFn, scr); 


    //Exit
    return 0;
}

void rdFile(char fn[], vector<char> &a)
{
    //Declare variables
    ifstream in;
    int cnt = 0;
    
    //Open the file
    in.open(fn);
    
    //Read the values
    while(in >> a[cnt++] && cnt < a.size());
    
    //Close the file
    in.close();
}

void wrtFile(string fn, vector<int> &pts)
{
    //Declare variables
    ofstream out;
    
    //Open the file
    out.open(fn.c_str());
    
    //Read the values
    for(int i = 0; i < pts.size(); i++)
    {
        out << pts[i] << endl;
    }
    
    //Close the file
    out.close();
}

void grade(vector<char> &key, vector<char> &stu, vector<int> &pts)
{
    for(int i = 0; i < pts.size(); i++)
    {
        if(key[i] == stu[i])
            pts[i] = 1;
    }
}

int score(vector<int> &pts)
{
    int sum = 0;
    for(int i = 0; i < pts.size(); i++)
    {
        sum += pts[i];
    }
    return sum;
}