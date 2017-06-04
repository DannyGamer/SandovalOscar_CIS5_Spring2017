/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on June 3rd, 2017, 7:27 PM
 * Purpose: Game of Blackjack Version 7
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>   //Needed to use strings
#include <cstdlib>  //For rand and srand
#include <ctime>    //Time for rand
#include <chrono>
#include <thread>
#include <iomanip>  //Format the output
#include <fstream>  //For I/O Files
#include <vector>   //The STL Vector -> Dynamic Array
#include <sstream>  //For parsing strings

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void menu();
int player(vector<int> &, int, short*, const string*, short*);
int dealer(vector<int> &, int, short*, const string*, short*);
void givCard(short*, const string*, short*, vector<int> &, int&);
int sum(vector<int> &);
void rules();
bool playAgain(int, int, bool, int&, int*, string*);
void outputFile(int, int, int&);
void outputScreen(int, int, int&);
void compareScore(int, int, int&, int&, int&, int&);
void lderBrd(int*, int, string*);
void sortArray(int*, string*);

//Execution begins here
int main(int argc, char** argv) {
    //Array for each card name
    const string cards[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
                               "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    //Array for value of each card
    short cardVal[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

    //Array for total number of each card value in deck
    short cardTot[13] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };

    //Array for player's hand
    vector<int> pHand(1);

    //Array for dealer's hand
    vector<int> dHand(1);

    //Declare variables
    char choice; //Input number to choose option menu
    int pScore; //Total score of player based on his hand's total value
    int dScore; //Total score of dealer based on his hand's total value
    int pIndex = 0; //Initialize to 0 each time program loops
    int dIndex = 0; //Initialize to 0 each time program loops
    bool askAgn = false; //Loops again as long as boolean is false
    int win = 0; //Counts the wins of the player
    int loss = 0; //Counts the losses of the player
    int money = 500;
    int gambled;
    string input;
    
    //For leaderboard
    int points[6];
    string names[6];
    
    const int SIZE = 20;
    char name[SIZE];
    
    cout << "Enter your name: ";
    //cin.ignore();
    cin.getline(name, SIZE);
    
    names[5] = name;

    do
    {
        //Loop will reset all of the card values in array for player 
        //and dealer back to zero at the start of each new game
        for (int i = 0; i < 11; i++)
        {
            pHand[i] = 0;   //Resets hand of player back to 0
            dHand[i] = 0;   //Resets hand of dealer back to 0
        }
        
        for (int i = 0; i < 13; i++)
            cardTot[i] = 4; //Resets all cards of each value back to 4

        askAgn = false; //Resets boolean back to false each time the program loops
        pIndex = 0; //Resets player's index each time program loops for array to start at the beginning
        dIndex = 0; //Resets dealer's index each time program loops for array to start at the beginning
        
        
        //Display the main menu
        menu();

        //Choose an option
        cout << "Type a number to choose your option: ";
        cin >> choice;

        switch (choice)
        {
            case '1':
                //Check to see if player meets minimum bet requirements. If not,
                //player is not allowed to continue playing and game ends.
                if (money < 5)
                {
                    cout << "Insufficient funds. You cannot place the minimum bet." << endl;
                    cout << "\nGame Over" << endl << endl;
                    //Output the game statistics to screen
                    outputScreen(win, loss, money);

                    // Call function to output statistics to file
                    outputFile(win, loss, money);

                    //Call function to make leaderboards
                    lderBrd(points, money, names);

                    exit(0);
                }
                
                bool gamble;
                //Ask player for amount of money to gamble
                do
                {
                    gamble = false;
                    cout << "\nYou have $" << money << ".\nChoose the amount of money "
                            "you want to gamble \n(5, 10, 25, 50, 100, 250, 500):\n$";
                    cin >> input;
                    if(input != "5" && input != "10" && input != "25" && input != "50" &&
                       input != "100" && input != "250" && input != "500")
                    {
                        cout << "Invalid input. Choose one of the available amounts." << endl;
                        gamble = true;
                    }
                    gambled = atoi(input.c_str()); //Convert variable back into integer
                    if(gambled > money)
                    {
                        cout << "You do not have enough funds to place this bet.\n"
                                "Choose an amount that you can afford." << endl;
                        gamble = true;
                    }
                } while(gamble);
                
                //gambled = atoi(input.c_str());
                
                //Total score of player's hand returned from player function will be assigned to pScore
                pScore = player(pHand, pIndex, cardTot, cards, cardVal); 
                
                //If player's score is less than 21, the game continues to dealer's turn
                if (pScore < 21)
                {
                    //Total score of dealer's hand returned from dealer function will be assigned to dScore
                    dScore = dealer(dHand, dIndex, cardTot, cards, cardVal); 
                    
                    // Call function to compare player and dealer's scores
                    compareScore(pScore, dScore, win, loss, money, gambled);
                }
                //If player's score is greater than 21, the game ends with a loss for the player
                else if (pScore > 21)
                {
                    cout << "\nYou lose.\n\n" << endl;
                    loss++;
                    money -= gambled;
                }
                //If player's score is equal to 21, player wins
                else
                {
                    dScore = dealer(dHand, dIndex, cardTot, cards, cardVal);
                        cout << "You win\n\n" << endl;
                        win++;
                        money += gambled;
                }
                playAgain(win, loss, askAgn, money, points, names);
                break;
            case '2':
                rules(); //Display rules of Blackjack
                break;
            case '3':
                cout << "Exit the program." << endl;
                break;
            default:
                cout << "Not a valid option." << endl;
        }
    }while (choice != '3');
    
    return 0;
}

// Create menu for game
void menu()
{
    cout << "===============================" << endl;
    cout << "          BLACKJACK            " << endl;
    cout << "===============================" << endl << endl;
    cout << "Welcome to the game of Blackjack" << endl;
    cout << "What would you like to do?" << endl << endl;          
    cout << "1. Play" << endl; //Option 1 plays the game
    cout << "2. Rules" << endl; //Option 2 displays the rules of the game
    cout << "3. Quit" << endl << endl; //Option 3 exits the program
}

// Function for player's turn
int player(vector<int> &pHand, int pIndex, short* cardTot, const string* cards, short* cardVal)
{
    bool askAgn = false; //Set boolean statement to false to continue loop
    int pTotal = 0; //Total sum of player's cards' values
    char choose;    //Choose whether to hit or stand
    int hIndex = 0;

    //Deal the first two cards
    cout << "\n\nYour two cards are:" << endl;
    givCard(cardTot, cards, cardVal, pHand, hIndex);  //First card dealt will go into first space of array
    givCard(cardTot, cards, cardVal, pHand, hIndex);  //Second card dealt will go into second space of array

    pTotal = sum(pHand); //Sum of player's hand returned from sum function will be assigned to pTotal

    if (pTotal < 21)
    {
        //Loop the question to hit or stand until player stands, 
        //or wins or loses the game by hitting 21 or over 21
        do
        {
            pTotal = 0; //Reset pTotal back to 0 to give correct sum each time a new card is dealt

            cout << "\nWould you like to hit (h) or stand (s)?" << endl;
            cin >> choose; //Player inputs choice

            if (choose == 'h' || choose == 'H') //If chosen to hit, another card will be dealt
            {
                cout << "New card is:" << endl;
                givCard(cardTot, cards, cardVal, pHand, hIndex); //Card will go into next space in array

                pTotal = sum(pHand); //New sum will be calculated

                //Check to see if player has won or lost the game, else continue asking to hit or stand.
                if (pTotal > 21)
                {
                    cout << "Your total is greater than 21." << endl;
                    break; //Player has lost. Break out of loop and display a loss
                }
                askAgn = true; //Loop will continue as long as player chooses to hit
            }
            else if (choose == 's' || choose == 'S') //If chosen to stand, player will end his turn
            {
                cout << "You have ended your turn." << endl;
                pTotal = sum(pHand); //Display sum of player's current hand
                askAgn = false; //Break out of question loop to continue the game
            }
            else
            {
                cout << "Invalid option." << endl;
                askAgn = true; //If option is invalid, continue to ask question until valid option is input
            }

        } while (askAgn); //Loop will continue as long as askAgain is true
    }
    else if (pTotal == 21)
    {
        cout << "Blackjack." << endl;
    }

    return pTotal; //Returns player's total score back to main
}

// Function for dealer's turn
int dealer(vector<int> &dHand, int dIndex, short* cardTot, const string* cards, short* cardVal)
{
    int dTotal = 0; //Total sum of dealer's cards' values
    int hIndex = 0;

    //Deal the first two cards
    cout << "\n\nDealer's cards are:" << endl;
    givCard(cardTot, cards, cardVal, dHand, hIndex);  //First card dealt will go into first space of array
    givCard(cardTot, cards, cardVal, dHand, hIndex);  //Second card dealt will go into second space of array

    dTotal = sum(dHand); //Sum of dealer's hand returned from sum function will be assigned to dTotal

    do
    {
        if (dTotal < 17) //If total is less than 17, dealer has to hit.
        {
            dTotal = 0; //Reset dTotal back to 0 to give correct sum 

            cout << "Dealer hits. New card is: " << endl;
            givCard(cardTot, cards, cardVal, dHand, hIndex);
            dTotal = sum(dHand);

            if (dTotal > 21)
            {
                cout << "Dealer lost." << endl;
            }
        }
        else if (dTotal >= 17) //If total is greater than or equal to 17, dealer has to stand.
        {
            cout << "The dealer stands." << endl;
        }
    } while (dTotal < 17); //Loop as long as score is less than 17
    return dTotal; //Returns dealer's total score back to main
}

// Deals cards to dealer and player and removes them from cards in deck
void givCard(short* cardTot, const string* cards, short* cardVal, vector<int> &hand, int& hIndex)
{
    int cIndex; //Card index used to create random cards and assign a name and value to each
    bool givOther = false;
    
    // NOTE: We wait 1000 milliseconds because fast CPUs
    // give the same number inside random.
    this_thread::sleep_for(chrono::milliseconds(1000));

    //Set the random number seed.
    std::srand(static_cast<unsigned int>(time(0)));

    do
    {
        givOther = false;
        
        //Gives out a random card
        cIndex = rand() % 13;
        
        hand[hIndex] = cardVal[cIndex];
        if(hand[hIndex] == hand[hIndex - 1])
        {
            givOther = true;
        }
        
        //Removes the card from the deck.
        cardTot[cIndex] -= 1;
        
    } while (cardTot[cIndex] == -1 || givOther == true);
    
    //Will continue to deal cards as long as there are still cards of that value
    //if (cardTot[cIndex] > 0)
        cout << cards[cIndex] << " (" << cardVal[cIndex] << ")" << endl;
    
    hIndex++;
//    return cardVal[cIndex]; //Returns the value of each card back to dealer and player functions
}

// Sum for the value of all cards in your hand
int sum(vector<int> &hand)
{
    int total = 0; 

    for (int i = 0; i < 11; i++)
    {
        total += hand[i];
        
        if(total > 21)
        {
            for(int i = 0; i < 11; i++)
            {
                if(hand[i] == 11)
                {
                    hand[i] = 1;
                    total -= 10;
                }
            }
        }
    }
    cout << "The total value of the cards is " << total << endl;

    return total; //Returns sum of all cards in hand to dealer and player functions
}

// Rules of Blackjack
void rules()
{
    cout << "\n\nThe rules of this game are as follows:" << endl << endl;
    cout << "There are two players in this game, you and the dealer." << endl;
    cout << "Each player will initially get two cards from a deck of 52 "
            "cards. " << endl;
    cout << "After getting the cards, you will be given a choice to hit or "
            "stand." << endl;
    cout << "If chosen to hit, you will be given another card in addition to "
            "those you had." << endl;
    cout << "If chosen to stand, you will keep your current hand, and your "
            "turn will end." << endl;
    cout << "Each card has a value corresponding to the number that is shown "
            "on them.\nThe special face cards of Jack, Queen, and King, each have a "
            "value of 10, " << endl;
    cout << "whereas the Ace has a value of 1." << endl;
    cout << "The goal of the game is to see who can get the closest to "
            "the number 21, with any combination of cards you have. " << endl;
    cout << "However, if you were to pass the number 21 with the added value "
            "of all of your cards, you will lose the game." << endl;
    cout << "Whoever gets the closest to 21 without going over it, will win "
            "the game." << endl;
    cout << "In the occasion that both players get the same score in the end, "
            "the dealer wins the game.\n\n" << endl;
    
}

bool playAgain(int win, int loss, bool askAgn, int& money, int* points, string* names)
{
    do //Ask player whether to play again or not
    {
        char again; //Input character to play again or not
        
        cout << "You now have $" << money << endl << endl;
        
        cout << "Would you like to play again? (y/n)" << endl;
        cin >> again;

        if (again == 'n' || again == 'N') //If chosen not to play, the program will exit
        {
            //Output the game statistics to screen
            outputScreen(win, loss, money);

            // Call function to output statistics
            outputFile(win, loss, money);
            
            //Call function to make leaderboards
            lderBrd(points, money, names);
                    
            exit(0);
        }
        else if (again == 'y' || again == 'Y') //If chosen to play, the program will run again
            break;
        else //If option is invalid, question will continue to be asked
        {
            cout << "Invalid option." << endl;
            askAgn = true;
        }
    } while (askAgn);
    return askAgn;
}

void outputFile(int win, int loss, int& money)
{
    //Declare and initialize output file
    ofstream out;
    char outName[] = "GameStats.dat";
    out.open(outName);
    
    //Output the game statistics to file
    out << fixed << setprecision(1) << showpoint;
    out << "Stats for this game are:" << endl;
    out << "Total wins = " << win << endl;
    out << "Total losses = " << loss << endl;
    out << "Total games = " << win + loss << endl;
    out << "Percentage of games won = " << static_cast<float>(win) / 
            (win + loss) * 100 << "%" << endl;
    out << "Percentage of games lost = " << static_cast<float>(loss) / 
            (win + loss) * 100 << "%" << endl;
    out << "Final Score: " << money << endl;

    out.close();
}

void outputScreen(int win, int loss, int& money)
{
    cout << fixed << setprecision(1) << showpoint;
    cout << "Game Over" << endl << endl;
    cout << "Statistics for this game are:" << endl;
    cout << "Total wins = " << win << endl;
    cout << "Total losses = " << loss << endl;
    cout << "Total games = " << win + loss << endl;
    cout << "Percentage of games won = " << static_cast<float>(win) / 
            (win + loss) * 100 << "%" << endl;
    cout << "Percentage of games lost = " << static_cast<float>(loss) / 
            (win + loss) * 100 << "%" << endl;
    cout << "Final score: $" << money << endl;
}

void compareScore(int pScore, int dScore, int& win, int& loss, int& money, int& gambled)
{
    //Display the scores of the player and the dealer for comparison
    cout << "\nPlayer = " << pScore << endl;
    cout << "Dealer = " << dScore << endl;

    if (dScore > 21) //If dealer's score is greater than 21, player wins
    {
        cout << "\nYou win.\n\n" << endl;
        win++;
        money += gambled;
    }

    //Player's score must be greater than dealer's score to win
    if (pScore > dScore)
    {
        cout << "\nYou win.\n\n" << endl;
        win++;
        money += gambled;
    }
    //If dealer's score is greater than player's score, and less than 21, player loses
    else if (dScore > pScore && dScore <= 21)
    {
        cout << "\nYou lose.\n\n" << endl;
        loss++;
        money -= gambled;
    }
    else if (pScore == dScore)
    {
        cout << "\nYou win.\n\n" << endl;
        win++;
        money += gambled;
    }
}

void lderBrd(int* points, int money, string* names)
{
    //Declare and initialize leaderboards file
    char scores[] = "Leaderboards.dat";
    int count = 0;

    //Open the file
    //in.open(scores);

    //Read the values
    //while(in >> points[count++] && count < 5);
    
    string name;  //Save names temporarily into strings
    string score; //Save scores temporarily into strings
    string line;
    ifstream in("Leaderboards.dat");

    while(getline(in,line))   
    {
        stringstream iss(line);
        getline(iss, name, ','); //Read names in file up to the comma and store in name
        getline(iss, score);     //Read scores in file after comman and store in score
        names[count] = name;     //Save names into names array
        points[count] = atoi(score.c_str()); //Convert strings into integers and save to points array
        count++; //Increase counter after each loop to completely fill arrays
        //cout << "Name: " << name << " Score: " << score << endl; //Display names and scores
    }

    //Close the file
    in.close();
    
    //Assign player's score to last spot in array to be compared with previous scores
    points[5] = money;
    
    //Call function to sort array for leaderboards
    sortArray(points, names);
    
    //Declare and initialize output file
    ofstream out;

    //Open the file
    out.open(scores);

    cout << "\n\nLeaderboards:" << endl << endl;
    //Write the names and scores to file and output the leaderboards to screen
    for(int i = 0 ; i < 5; i++)
    {
        cout << "Name: " << setw(5)<< names[i] << "  Score: $" << points[i] << "\n";
        out << "Name: " << setw(5)<< names[i] << "  Score: $" << points[i] << "\n";
    }

    //Close the file
    out.close();
}

//Use bubble sort to sort array
void sortArray(int* points, string* names)
{
    bool swap; 
    int temp; //Temporary variable needed to swap scores
    string sTemp; //Temporary variable to swap names along with scores
    
    do
    {
        swap = false; //Set flag to break loop when everything is sorted
        for(int count = 0; count < 5; count++)
        {
            //Sort parallel arrays in order from largest to smallest score
            if(points[count] < points[count + 1])
            {
                //Sort score array in order from largest to smallest
                temp = points[count];
                points[count] = points[count + 1];
                points[count + 1] = temp;
                
                //Sort names of players along with their scores
                sTemp = names[count];
                names[count] = names[count + 1];
                names[count + 1] = sTemp;
                
                //Will continue to loop until everything is sorted
                swap = true;
            }
        }
    } while(swap);
}