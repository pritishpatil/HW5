
/*
PIC 10B 2A, Homework 5
Purpose: Wallet Printer
Author: Pritish Patil
Date: 05/29/2020
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include "card.h"
#include "idcard.h"
#include "bankcard.h"
using namespace std;

void entryDisplay()
{
    cout << "*********************" << endl;
    cout << "*  Wallet Printer!  *" << endl;
    cout << "*********************" << endl;
    cout << endl;
    cout << "Print Cards by selecting the type (0 when done) : " << endl;
    cout << "1. Basic Card" << endl;
    cout << "2. ID Card" << endl;
    cout << "3. Bank Card" << endl;
}
int main()
{
    entryDisplay();
    vector<Card*> allCards;
    bool flag = true;

    // process input for cards
    while (flag == true)
    {
        int choice;
        cout << endl;
        cout << "Card Type : ";
        cin >> choice;
        cin.ignore();

        Card* cardPtr;  // base pointer, using polymorphism
        switch (choice)
        {
        case 0:
            flag = false;
            break;
        case 1: 
            cardPtr = new Card();
            cardPtr->readInputs();
            allCards.push_back(cardPtr);
            break;
        case 2:
            cardPtr = new IDCard();
            cardPtr->readInputs();
            allCards.push_back(cardPtr);
            break;
        case 3:
            cardPtr = new BankCard();
            cardPtr->readInputs();
            allCards.push_back(cardPtr);
            break;
        }
    }

    // sorts vector into acending order by date
    std::sort(allCards.begin(), allCards.end(), 
        [](Card* x, Card* y) 
        {
            if (y->getYear() > x->getYear()) return true;
            if (y->getYear() < x->getYear()) return false;
            if (y->getMonth() > x->getMonth()) return true;
            if (y->getMonth() < x->getMonth()) return false;
            if (y->getDay() > x->getDay()) return true;
            if (y->getDay() < x->getDay()) return false;
            return false;
        });

    cout << " ---------------------------------------------" << endl;

    // outputs cards
    for (int i = 0; i < allCards.size(); i++)
    {
        Card* current = allCards[i];
        current->displayCard();
        cout << " ---------------------------------------------" << endl;
    } 
}


