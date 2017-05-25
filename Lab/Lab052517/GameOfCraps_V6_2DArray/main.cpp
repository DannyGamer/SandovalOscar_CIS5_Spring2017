/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on May 23rd, 2017, 11:38 AM
 * Purpose:  Project 2 - Simulate a Craps Game
 *           Implement arrays
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O
#include <iomanip>   //Format the output
#include <string>    //Strings
#include <cmath>     //Math Functions
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100.0f; //Conversion to Percent
const int COLS = 2;

//Function Prototypes
char rollDie(int);                                               //Roll the Dice prototype
void fileDsp(ofstream &, int [][COLS], int, int, int, int);    //File Display
void scrnDsp(int [][COLS], int, int, int, int);                //Screen Display
void crpGame(int [][COLS], int, int &, int &, int &);          //Play Craps

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    ifstream in;      //Input File
    ofstream out;     //Output File
    int nGames;       //Number of Games, wins/losses
    int mxThrw = 0;   //Throw statistics
    int numThrw = 0;  //Throw statistics
    int lmGames = 100000000; //Game limiter
    const int SIZE = 13;     //Size of our Arrays
    int winLose[SIZE][COLS] = {};    //Initializing the win array
    
    //Initialize variables
    string inName = "GameInfo.dat";   //String Name
    char outName[] = "GameStats.dat"; //Character Array Name
    in.open(inName.c_str());          //Open the Input File
    out.open(outName);                //Open the Output FIle
    while(in >> nGames); //Last value becomes the number of games
    nGames = nGames > lmGames? lmGames:nGames; //Limit games if too high
    
    //Play the game the prescribed number of times
    int beg = time(0);   //Time the game play
    crpGame(winLose, SIZE, nGames, numThrw, mxThrw);
    int end = time(0);   //End time of Game play
    
    
    //Output the game statistics to the screen
    cout << "Total time to play these Games in integer seconds = " << end-beg << endl;
    scrnDsp(winLose, SIZE, nGames, numThrw, mxThrw);
    
    //Output the game statistics to a file
    out << "Total time to play these Games in integer seconds = " << end-beg << endl;
    fileDsp(out, winLose, SIZE, nGames, numThrw, mxThrw);
    
    //Close files
    in.close();
    out.close();
    
    //Exit stage right!
    return 0;
}

char rollDie(int sides)
{
    char die1 = rand()%sides+1; //[1, number of sides]
    char die2 = rand()%sides+1; //[1, number of sides]
    char sum1 = die1 + die2;
    return sum1;
}

void scrnDsp(int winLose[][COLS], int SIZE, int nGames, int numThrw, int mxThrw)
{
    //Output the transformed data
    cout << fixed << setprecision(2) << showpoint;
    cout << "Total number of Games = " << nGames << endl;
    cout << "ROll     Wins     Losses" << endl;
    int sWins = 0;
    int sLosses = 0;
    for(int sum = 2; sum < SIZE; sum++)
    {
        sWins += winLose[sum][0];
        sLosses += winLose[sum][1];
        cout << setw(4) << sum << setw(10) << winLose[sum][0] << setw(10) << winLose[sum][1] << endl;
    }
    cout << "Total wins and losses = " << sWins + sLosses << endl;
    cout << "Percentage wins       = "
            <<static_cast<float>(sWins)/nGames*PERCENT << "%" << endl;
    cout << "Percentage losses     = "
            <<static_cast<float>(sLosses)/nGames*PERCENT << "%" << endl; 
    cout << "Maximum number of throws in a game = " << mxThrw << endl;
    cout << "Average throw per game = " <<
            static_cast<float>(numThrw)/nGames << endl;
    cout << "Ratio of Longest to shortest game = 10^" << log10(mxThrw) << endl;
}

void fileDsp(ofstream &out, int winLose[][COLS], int SIZE, int nGames, int numThrw, int mxThrw)
{
     //Output the transformed data
    out << fixed << setprecision(2) << showpoint;
    out << "Total number of Games = " << nGames << endl;
    out << "ROll     Wins     Losses" << endl;
    int sWins = 0;
    int sLosses = 0;
    for(int sum = 2; sum < SIZE; sum++)
    {
        sWins += winLose[sum][0];
        sLosses += winLose[sum][1];
        out << setw(4) << sum << setw(10) << winLose[sum][0] << setw(10) << winLose[sum][1] << endl;
    }
    out << "Total wins and losses = " << sWins + sLosses << endl;
    out << "Percentage wins       = "
            <<static_cast<float>(sWins)/nGames*PERCENT << "%" << endl;
    out << "Percentage losses     = "
            <<static_cast<float>(sLosses)/nGames*PERCENT << "%" << endl; 
    out << "Maximum number of throws in a game = " << mxThrw << endl;
    out << "Average throw per game = " <<
            static_cast<float>(numThrw)/nGames << endl;
    out << "Ratio of Longest to shortest game = 10^" << log10(mxThrw) << endl;
}

void crpGame(int winLose[][COLS], int SIZE, int &nGames, int &numThrw, int &mxThrw)
{
    for(int game = 1; game <= nGames; game++)
    {
        //Throw dice and sum
        int gmThrw = 1;
        char sum1 = rollDie(6);
        
        //Determine wins and losses
        switch(sum1)
        {
            case  7:
            case 11: winLose[sum1][0]++; break;
            case  2:
            case  3:
            case 12: winLose[sum1][1]++; break;
            default:{
                //Loop until a 7 or previous sum is thrown
                bool thrwAgn = true;
                do
                {
                    //Throw the dice again 
                    char sum2 = rollDie(6);
                    gmThrw++;  //Increment the number of throws
                    if(sum2 == 7)
                    {
                        winLose[sum1][1]++;
                        thrwAgn = false;
                    }else if (sum1 == sum2)
                    {
                        winLose[sum1][0]++;
                        thrwAgn = false;
                    }
                }while(thrwAgn); //do-while
            }    
        }
        numThrw += gmThrw;
        if(mxThrw < gmThrw)mxThrw = gmThrw; //Independent if
    }//end of for-loop
}