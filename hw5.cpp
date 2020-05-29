
#include <iostream>
#include <vector>
#include "card.h"
#include "idcard.h"
#include "bankcard.h"

void entryDisplay()
{
    cout << "*********************" << endl;
    cout << "*  Wallet Printer!  *" << endl;
    cout << "*********************" << endl;
    cout << endl;
}
int main()
{
    entryDisplay();
    
    vector<Card*> allCards;
    bool flag = true;

    while (flag == true)
    {
        int choice;
        cout << "Print Cards by selecting the type (0 when done) : " << endl;
        cout << "1. Basic Card" << endl;
        cout << "2. ID Card" << endl;
        cout << "3. Bank Card" << endl;
        cout << endl;
        cout << "Card Type : " << endl;
        cin >> choice;

        Card* cardPtr;
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

    cout << "----------------------------------------------" << endl;
    for (int i = 0; i < allCards.size(); i++)
    {
        Card* current = allCards[i];
        current->displayCard();
        cout << "----------------------------------------------" << endl;
    } 
}


