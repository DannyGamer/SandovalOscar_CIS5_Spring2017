/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 14, 2017, 4:12 PM
 * Purpose: Game of Blackjack
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iostream>
#include <string>
#include <cstdlib> //For rand and srand
#include <ctime> //For the time function
#include <chrono>
#include <thread>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void choice();
void hit(int);

// Array for each card name
const string cards[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
"Jack", "Queen", "King" };

//Array for value of each card
const short cardsVal[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

//Array for total number of each card value
short cardTot[13] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    hit(2);    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

// The dealer deals a card.
void dealCard()
{
	int cardIndex;
	//Set the random number seed
	srand(static_cast<unsigned int>(time(0)));

	do
	{
		// Gives out a card.
		cardIndex = rand() % 12;

		// Removes the card from the deck.
		cardTot[cardIndex] -= 1;

		if (cardTot[cardIndex] > 0)
		{
			cout << "Your card is " << cards[cardIndex] << " (" << cardsVal[cardIndex] << ")" << endl;
		}
	} while (cardTot[cardIndex] == 0);
}

// Asks the dealer for a number of cards.
void hit(int delCard)
{
	for (int i = 0; i < delCard; i++)
	{
		dealCard();
		// NOTE: We wait 500 milliseconds because fast CPUs
		// give the same number inside random.
		this_thread::sleep_for(chrono::milliseconds(500));
	}
}

//void choice()
//{
//
//	//Declare variables
//	
//	int card2;
//	int card3;
//	int total;
//	char hit = 'h';
//	char stand = 's';
//	char choice;
//
//
//	for (int i = 1; i <= 40; i++)
//	{
//
//		//cout << "Your cards are " << cards[card1Index] << "(" << cardsVal[card1Index] << ") and " << cards[card2] << "(" << cardsVal[card2] << ")" << endl;
//
//		////Calculate total value in hand
//		//total = cardsVal[card1Index] + cardsVal[card2];
//		//cout << "Your total count is " << total << endl << endl;
//
//
//	}
//	
//}