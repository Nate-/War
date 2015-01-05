//Nathaniel Quan

#include "Card.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

#define spade 6
#define club 5
#define diamond 4
#define heart 3

//Function prototypes
void InitializeDeck(deque<Card> &);
void Output(deque<Card> &);
void Shuffle(deque<Card> &);


//Random number generator
int random (int i)  {return rand() % i;}


int main()
{   
    //Seed random generator
    srand(time(0));

    //Deque, stack, and vector containers from STL library used
    deque<Card> deck;
    stack<Card> player1;
    vector<Card> player2;
    Card topCard;

    //Original deck
    cout << "---Deck of cards created---" << endl;
    InitializeDeck(deck);
    Output(deck);

    //Shuffle deck
    cout << "\n\n---Shuffled deck---" << endl;
    Shuffle(deck);
    Output(deck);

    //Give each player 5 cards
    for (int i = 0; i < 5; i++)
        player1.push(deck[i]);

    for (int i = 5; i < 10; i++)
        player2.push_back(deck[i]);

    //Output player hands
    cout << "\n\n---Player 1's hand---" << endl;
    while(!player1.empty()){
        cout << player1.top() << " ";
        player1.pop();
    }

    cout << "\n\n---Player 2's hand---" << endl;
    for (vector<Card>::iterator it = player2.begin(); it != player2.end(); it++)
        cout << *it << " ";

    //Blank line
    cout << endl << endl;

    system("pause");
    
    return 0;
}

void InitializeDeck(deque<Card> &pile)
//Post: Adds all 52 cards by suit into deck by exhaustion
{
    //Add Spades
    for (int i = 1; i <= 13; i++){
        Card temp(i, spade);
        pile.push_back(temp);
    }

    //Add Clubs
    for (int i = 1; i <= 13; i++){
        Card temp(i, club);
        pile.push_back(temp);
    }

    //Add Diamonds
    for (int i = 1; i <= 13; i++){
        Card temp(i, diamond);
        pile.push_back(temp);
    }

    //Add Hearts
    for (int i = 1; i <= 13; i++){
        Card temp(i, heart);
        pile.push_back(temp);
    }

}

void Output(deque<Card> &pile)
//Output the entire deck to console
{
    for (int i = 0; i < pile.size(); i++)
        cout << pile[i] << "  ";
}

void Shuffle(deque<Card> &pile)
//Randomly shuffle deck using random_shuffle from <algorithm> library
{
    random_shuffle(pile.begin(), pile.end(), random);
}