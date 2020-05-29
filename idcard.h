#pragma once
#include "card.h"

class IDCard :
	public Card
{
public: 

	IDCard();
	IDCard(int, string);
	int getIDNumber();
	string getDateOfBirth();

	void setIDNumber(int);
	void setDateOfBirth(string);

	void readInputs();
	void displayCard();

private: 

	int IDNumber;
	string dateOfBirth;
};

