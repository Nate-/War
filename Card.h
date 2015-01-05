//Nathaniel Quan
//CS151114
//Lab 10 - STL

#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card{
public:
    //Constructors
    Card();
    Card(int, char);
    
    //Accessors
    int getPoints()         {return points;}
    char getSuit()          {return suit;}

    //Mutators
    void setPointValue(int p);
    void setSuit(char s);
        //Suit        Ascii Value
        //  3           Hearts
        //  4           Diamond
        //  5           Club
        //  6           Spade

    //Overloaded << 
    friend ostream& operator << (ostream& out, const Card& card);

private:
    char value;
    int points;
    char suit;
};



#endif