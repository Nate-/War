//Nathaniel Quan
//CS151114
//Lab 10 - STL

#include "Card.h"

Card::Card()
//Constructor
{}

Card::Card(int p, char s)
//Overloaded constructor
{
    points = p;
    suit = s;

    if (p == 1) value = 'A';
    else if (p == 11) value = 'J';
    else if (p == 12) value = 'Q';
    else if (p == 13) value = 'K';
    else value = '0';                   //Arbitrary value since points and value are the same except
                                        //for Ace, Jack, Queen, and King
}

void Card::setPointValue(int p)
{
    points = p;

    if (p == 1) value = 'A';
    else if (p == 11) value = 'J';
    else if (p == 12) value = 'Q';
    else if (p == 13) value = 'K';
    else value = '0';                   //Arbitrary value since points and value are the same except
                                        //for Ace, Jack, Queen, and King
}

void Card::setSuit(char s)
{
        //Suit        Ascii Value
        //  3           Hearts
        //  4           Diamond
        //  5           Club
        //  6           Spade

    suit = s;
}

ostream& operator << (ostream & out, const Card& card)
//Overload the operator for output
{
    out << card.suit;
    if (card.points > 1 && card.points < 11)
        out << card.points;
    else
        out << card.value;

    return out;
}