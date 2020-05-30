
/*
PIC 10B 2A, Homework 5
Purpose: Wallet Printer
Author: Pritish Patil
Date: 05/29/2020
*/

#pragma once
#include "card.h"

class IDCard :
	public Card
{
public: 

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

