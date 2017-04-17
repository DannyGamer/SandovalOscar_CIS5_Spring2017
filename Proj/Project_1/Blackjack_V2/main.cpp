/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 15, 2017, 6:07 PM
 * Purpose: Game of Blackjack Version 2
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>
#include <cstdlib> //For rand and srand
#include <ctime> //For the time function
#include <chrono>
#include <thread>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

// Array for each card name
const string cards[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
"Jack", "Queen", "King" };

//Array for value of each card
const short cardsVal[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

//Array for total number of each card value
short cardTot[13] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };

//Array for hand in player
int playerHand[11];

//Array for hand in dealer
int handDeal[11];

int handIndex = 0;
int dealIndex = 0;

//Function Prototypes
void menu();
int player();
int dealer();
int dealCard();
void rules();
int sum(int*);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
	int choice;
	int pScore;
	int dScore;
	char again;
	bool askAgain = false;

	do
	{
		for (int i = 0; i < 11; i++)
		{
			playerHand[i] = 0;
			handDeal[i] = 0;
		}

		askAgain = false;
		handIndex = 0;
		dealIndex = 0;

		cout << "===============================" << endl;
		cout << "          BLACKJACK            " << endl;
		cout << "===============================" << endl << endl;
		cout << "Welcome to the game of Blackjack" << endl;
		cout << "What would you like to do?" << endl << endl;

		//Display the main menu
		menu();

		//Choose an option
		cout << "Type a number to choose your option: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			pScore = player();

			//If player's score is less than 21, the game continues to dealer's turn
			if (pScore < 21)
			{
				dScore = dealer();

				cout << "\nPlayer = " << pScore << endl;
				cout << "Dealer = " << dScore << endl;

				if (pScore > dScore && pScore <= 21)
				{
					cout << "You win!\n\n" << endl;
				}
				else if (dScore > pScore && dScore <= 21)
				{
					cout << "\nYou lose.\n\n" << endl;
				}
			}
			//If player's score is greater than 21, the game ends with a loss for the player
			else if (pScore > 21)
			{
				cout << "You lose." << endl;
			}
			//If player's score is equal to 21, player wins
			else
			{
				cout << "You win!" << endl;
			}
			do
			{
				cout << "Would you like to play again? (y/n)" << endl;
				cin >> again;

				if (again == 'n' || again == 'N')
				{
					cout << "Exit the program." << endl;
					exit(0);
				}
				else if (again == 'y' || again == 'Y')
				{
					break;
				}
				else
				{
					cout << "Invalid option." << endl;
					askAgain = true;
				}
			} while (askAgain);
			break;
		case 2:
			rules();
			break;
		case 3:
			cout << "Exit the program." << endl;
			break;
		default:
			cout << "Not a valid option." << endl;
		}
	}while (choice != 3);
	
	return 0;
}


// Create menu for game
void menu()
{
	cout << "1. Play" << endl;
	cout << "2. Rules" << endl;
	cout << "3. Exit the program" << endl << endl;
}


// Function that starts the game
int player()
{
	bool askAgain = false;
	int pTotal = 0; //Total sum of your cards' values
	char choose;    //Choose whether to hit or stand
	
	cout << "\n\nYour two cards are:" << endl;
	playerHand[handIndex++] = dealCard();  //First card dealt will go into first space of array
	playerHand[handIndex++] = dealCard();  //Second card dealt will go into second space of array

	pTotal = sum(playerHand);


	if (pTotal < 21)
	{
		//Loop the question to hit or stand until player stands or wins or loses tht game by hitting
		do
		{
			pTotal = 0;

			cout << "\nWould you like to hit (h) or stand (s)?" << endl;
			cin >> choose;

			if (choose == 'h' || choose == 'H') //If chosen to hit, another card will be dealt
			{
				playerHand[handIndex++] = dealCard(); //Card will go into next space in array

				pTotal = sum(playerHand);

				//Check to see if player has won or lost the game, else continue asking to hit or stand.
				if (pTotal > 21)
				{
					cout << "Your total is greater than "
                                                "21." << endl << endl << endl;
					break;
				}
				else if (pTotal == 21)
				{
					cout << "Your total is equal to 21."
                                             << endl << endl << endl;
					break;
				}
				askAgain = true;
			}
			else if (choose == 's' || choose == 'S') //If chosen to stand, player will end his turn
			{
				cout << "You have ended your turn." << endl;
				pTotal = sum(playerHand);
				askAgain = false;
			}
			else
			{
				cout << "Invalid option." << endl;
				askAgain = true;
			}

		} while (askAgain);
	}

	return pTotal;
}


int dealer()
{
	int dTotal = 0; //Total sum of dealer's cards' values

	cout << "\n\nDealer's cards are:" << endl;
	handDeal[dealIndex++] = dealCard();  //First card dealt will go into first space of array
	handDeal[dealIndex++] = dealCard();  //Second card dealt will go into second space of array

	dTotal = sum(handDeal);

	if (dTotal < 17) //If total is less than 17, dealer has to hit.
	{
		dTotal = 0;

		cout << "Dealer hits. New card is: " << endl;
		handDeal[dealIndex++] = dealCard();

		dTotal = sum(handDeal);

		if (dTotal > 21)
		{
			cout << "Dealer lost. You win!" << endl;
		}
	}
	else if (dTotal >= 17) //If total is greater than or equal to 17, dealer has to stand.
	{
		cout << "The dealer stands." << endl;
	}
	return dTotal;
}


// The dealer deals a card.
int dealCard()
{
	int cardIndex;

	// NOTE: We wait 100 milliseconds because fast CPUs
	// give the same number inside random.
	this_thread::sleep_for(chrono::milliseconds(1000));

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
			cout << cards[cardIndex] << " (" << cardsVal[cardIndex] 
                             << ")" << endl;
		}
	} while (cardTot[cardIndex] == 0);
	return cardsVal[cardIndex];
}


int sum(int* hand)
{
	int total = 0;

	for (int i = 0; i < 11; i++)
	{
		total += hand[i]; //Adds the total amount of the value of all the cards in your hand
	}
	cout << "The total value of the cards is " << total << endl;

	return total;
}


void rules()
{
	cout << "\n\nThe rules of this game are as follows:" << endl << endl;
	cout << "There are two players in this game, you and the dealer." << endl;
	cout << "Each player will initially get two cards from a deck of "
                "52 cards. " << endl;
	cout << "Each card has a value corresponding to the number that is "
                "shown on them. "
		"\nThe special face cards of Jack, Queen, and King, each "
                "have a value of 10, " << endl;
	cout <<	"whereas the Ace has a value of 1." << endl;
	cout << "The goal of the game is to see who can get the closest to "
                "the number 21, with any combination of cards you have." << endl;
	cout << "However, if you were to pass the number 21 with the added "
                "value of all of your cards, you will lose the game.\n\n" << endl;
}